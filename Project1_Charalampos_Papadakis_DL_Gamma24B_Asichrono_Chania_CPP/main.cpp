#include <iostream> // Βιβλιοθήκη για input/output στην κονσόλα
#include <locale>   // Βιβλιοθήκη για greek language
#include "student.h" // Βιβλιοθήκη που περιέχει τον ορισμό της κλάσης Student
using namespace std;

// Συνάρτηση create
// Δημιουργεί ένα νέο αντικείμενο Student, συνδυάζοντας δεδομένα από δύο μαθητές
Student create(const Student& s1, const Student& s2) {
    Student s3; // Δημιουργία του νέου μαθητή
    s3.setFirstName(s1.getFirstName()); // Παίρνει το όνομα από τον πρώτο μαθητή
    s3.setLastName(s2.getLastName());   // Παίρνει το επώνυμο από τον δεύτερο μαθητή
    s3.setGrade((s1.getGrade() + s2.getGrade()) / 2); // Υπολογίζει τον μέσο όρο των βαθμών
    return s3; // Επιστρέφει τον νέο μαθητή
}

int main() {
    // Ρύθμιση για υποστήριξη ελληνικών χαρακτήρων
    setlocale(LC_ALL, "el_GR.UTF-8");

    // Δημιουργία του πρώτου μαθητή
    Student student1;
    student1.setFirstName("Χαράλαμπος"); // Όνομα του πρώτου μαθητή
    student1.setLastName("Παπαδάκης"); // Επώνυμο του πρώτου μαθητή
    student1.setGrade(8); // Βαθμός του πρώτου μαθητή

    // Δημιουργία του δεύτερου μαθητή
    Student student2;
    student2.setFirstName("Αμαλία"); // Ονομα του δεύτερου μαθητή
    student2.setLastName("Παπαδάκη"); // Επωνυμο του δεύτερου μαθητή
    student2.setGrade(6); // Βαθμός του δεύτερου μαθητή

    // Εκτύπωση των δεδομένων πρώτου μαθητή
    cout << "Μαθητής 1:" << endl;
    student1.print(); // Εμφανίζει το όνομα, το επώνυμο και τον βαθμό του πρώτου μαθητή

    // Εκτύπωση των δεδομένων δεύτερου μαθητή
    cout << "Μαθητής 2:" << endl;
    student2.print(); // Εμφανίζει το όνομα, το επώνυμο και τον βαθμό του δεύτερου μαθητή

    // Δημιουργία του τρίτου μαθητή χρησιμοποιώντας τη συνάρτηση create
    Student student3 = create(student1, student2);

    // Εκτύπωση των δεδομένων του τρίτου μαθητή
    cout << "Μαθητής 3 (δημιουργήθηκε):" << endl;
    student3.print(); // Εμφανίζει τα στοιχεία όνομα, το επώνυμο και τον μέσο όρο βαθμών του τρίτου μαθητή

    return 0; // Τέλος του προγράμματος
}

