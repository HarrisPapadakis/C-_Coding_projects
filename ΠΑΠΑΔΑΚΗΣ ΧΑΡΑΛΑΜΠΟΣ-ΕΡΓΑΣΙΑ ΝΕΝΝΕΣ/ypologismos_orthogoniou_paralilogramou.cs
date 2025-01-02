using System;

class RectangleArea {
    static void Main() {
        // Ζητάμε από τον χρήστη να εισάγει το μήκος της πλευράς Α
        Console.Write("Enter side A: ");
        // Διάβασμα  της είσοδου  του χρήστη, μετατροπή σε δεκαδικό αριθμό και  αποθήκευση στη μεταβλητή side A
        var sideA = double.Parse(Console.ReadLine());
        
        // Ζητάμε από τον χρήστη να εισάγει το μήκος της πλευράς Β
        Console.Write("Enter side B: ");
        // Διάβασμα  της είσοδου  του χρήστη, μετατροπή σε δεκαδικό αριθμό και  αποθήκευση στη μεταβλητή side Β
        var sideB = double.Parse(Console.ReadLine());
        
        // Υπολογίσμος του  εμβαδού του ορθογωνίου, πολλαπλασιάσμος των  δύο πλευρών
        var area = sideA * sideB; 
        // Εμφάνιση  αποτελέσματος (εμβαδόν) στον χρήστη
        Console.WriteLine($"The area of the rectangle is: {area}");
    }
}
