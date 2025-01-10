#ifndef STUDENT_H
#define STUDENT_H

#include <string> // Βιβλιοθήκη για χρήση συμβολοσειρών
using namespace std;

// Ορισμός της κλάσης Student
class Student {
private:
    string firstName; // Το όνομα του μαθητή
    string lastName;  // Το επώνυμο του μαθητή
    int grade;        // Ο βαθμός του μαθητή (τιμές από 0 έως 10)

public:
    // Κατασκευαστής και καταστροφέας
    Student();  // Δημιουργεί ένα αντικείμενο Student με default τιμές
    ~Student(); // Εκτελεί καθαρισμό όταν καταστρέφεται το αντικείμενο

    // Setters (Μέθοδοι για να δίνουμε τιμές στις μεταβλητές)
    void setFirstName(const string& name);  // Ορίζει το όνομα του μαθητή
    void setLastName(const string& surname); // Ορίζει το επώνυμο του μαθητή
    void setGrade(int grade);               // Ορίζει τον βαθμό του μαθητή

    // Getters (Μέθοδοι για να παίρνουμε τις τιμές των μεταβλητών)
    string getFirstName() const; // Επιστρέφει το όνομα του μαθητή
    string getLastName() const;  // Επιστρέφει το επώνυμο του μαθητή
    int getGrade() const;        // Επιστρέφει τον βαθμό του μαθητή

    // Μέθοδος εκτύπωσης
    void print() const; // Εμφανίζει τα δεδομένα του μαθητή
};

#endif

