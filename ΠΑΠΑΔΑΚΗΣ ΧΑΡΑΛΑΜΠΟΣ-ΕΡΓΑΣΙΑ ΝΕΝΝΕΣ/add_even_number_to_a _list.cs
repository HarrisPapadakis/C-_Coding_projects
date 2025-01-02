using System;
using System.Collections.Generic;

class EvenNumbers {
    static void Main() {
        // Ζητάμε από τον χρήστη να εισάγει έναν ακέραιο αριθμό N
        Console.Write("Enter an integer N: ");
        
        // Διαβάζουμε την είσοδο, τη μετατρέπουμε σε ακέραιο και την αποθηκεύουμε στη μεταβλητή N
        int N = int.Parse(Console.ReadLine());

        // Δημιουργούμε μια λίστα για να αποθηκεύσουμε τους ζυγούς αριθμούς
        List<int> evenNumbers = new List<int>();

        // Επαναλαμβάνουμε για κάθε αριθμό από το 1 μέχρι το N 
        
        for (int i = 1; i <= N; i++) {
            // Ελέγχουμε αν ο αριθμός είναι ζυγός
            if (i % 2 == 0) {
                // Αν είναι ζυγός, τον προσθέτουμε στη λίστα
                evenNumbers.Add(i);
            }
        }

        // Εκτυπώνουμε όλους τους ζυγούς αριθμούς από τη λίστα
        Console.WriteLine("Even numbers:");
        foreach (int number in evenNumbers) {
            Console.WriteLine(number); // Εκτυπώνουμε κάθε αριθμό σε νέα γραμμή
        }
    }
}
