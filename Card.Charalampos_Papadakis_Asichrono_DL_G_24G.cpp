#include <iostream>  // Βιβλιοθήκη για inpout/output
#include <string>    // Βιβλιοθήκη για χρήση της κλάσης string
#include <vector>    // Βιβλιοθήκη για χρήση του δοχείου vector
#include <cstdlib>   // Βιβλιοθήκη για συναρτήσεις τυχαιοποίησης
#include <ctime>     // Βιβλιοθήκη για τον χρόνο

using namespace std;

//  Κλάση που αναπαριστά ένα τραπουλόχαρτο
class Card {
private:
    string color;  // Το χρώμα 
    string shape;  // Το σχήμα 
    int number;    // Ο αριθμός
    string symbol; // Το σύμβολο

public:
    // Κατασκευαστής που αρχικοποιεί τις τιμές
    Card(string cardShape, int cardNumber) {
        setCardShape(cardShape);
        setCardNumber(cardNumber);
        setCardSymbol(cardNumber);
        setCardColor(cardShape);
    }

    // Ορισμός του σχήματος 
    void setCardShape(string cardShape) {
        vector<string> validShapes = {"spades", "diamonds", "hearts", "clubs"};
        if (find(validShapes.begin(), validShapes.end(), cardShape) != validShapes.end()) {
            shape = cardShape;
        } else {
            shape = "wrong shape";
        }
    }

    // Ορισμός του αριθμού 
    void setCardNumber(int cardNumber) {
        if (cardNumber >= 1 && cardNumber <= 13) {
            number = cardNumber;
        } else {
            number = 0;
        }
    }

    // Ορισμός του συμβόλου 
    void setCardSymbol(int cardNumber) {
        const vector<string> symbols = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
        if (cardNumber >= 1 && cardNumber <= 13) {
            symbol = symbols[cardNumber - 1];
        } else {
            symbol = "\0";
        }
    }

    // Ορισμός του χρώματος του τραπουλόχαρτου βάσει του σχήματος
    void setCardColor(string cardShape) {
        if (cardShape == "diamonds" || cardShape == "hearts") {
            color = "red";
        } else if (cardShape == "spades" || cardShape == "clubs") {
            color = "black";
        }
    }

    // Επιστρέφει το χρώμα του τραπουλόχαρτου
    string getCardColor() {
        return color;
    }

    // Επιστρέφει το σχήμα του τραπουλόχαρτου
    string getCardShape() {
        return shape;
    }

    // Επιστρέφει τον αριθμό του τραπουλόχαρτου
    int getCardNumber() {
        return number;
    }

    // Επιστρέφει το σύμβολο του τραπουλόχαρτου
    string getCardSymbol() {
        return symbol;
    }
};

// Συνάρτηση που δημιουργεί και εμφανίζει στην τύχη ένα  τραπουλόχαρτο
void random_card() {
    vector<string> shapes = {"spades", "diamonds", "hearts", "clubs"};
    srand(time(0));  // Αρχικοποίηση της γεννήτριας τυχαίων αριθμών
    string randomShape = shapes[rand() % shapes.size()];
    int randomNumber = (rand() % 13) + 1;
    Card randomCard(randomShape, randomNumber);
    cout << "Card: " << randomCard.getCardShape() << " "
         << randomCard.getCardSymbol() << " (" << randomCard.getCardColor() << ")" << endl;
}

int main() {
    random_card();  // Κλήση της συνάρτησης για εμφάνιση τυχαίου τραπουλόχαρτου
    return 0;
}
