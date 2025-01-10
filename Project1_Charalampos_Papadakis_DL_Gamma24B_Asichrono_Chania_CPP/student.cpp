#include "student.h" // Συμπερίληψη του αρχείου header για τον ορισμό της κλάσης Student
#include <iostream>  // Βιβλιοθήκη για input/output
using namespace std;

// Κατασκευαστής

Student::Student() : firstName(""), lastName(""), grade(0) {}

// Καταστροφέας

Student::~Student() {}

// Setters

// Ορίζει την τιμή της μεταβλητής firstName
void Student::setFirstName(const string& name) {
    firstName = name;
}

// Ορίζει την τιμή της μεταβλητής lastName
void Student::setLastName(const string& surname) {
    lastName = surname;
}

// Ορίζει την τιμή  grade
// Ελέγχει αν ο βαθμός είναι έγκυρος (0-10) πριν τον αποθηκεύσει
void Student::setGrade(int gradeValue) {
    if (gradeValue >= 0 && gradeValue <= 10) {
        grade = gradeValue; // Αν ο βαθμός είναι έγκυρος, αποθηκεύεται κανονικά
    } else {
        grade = 0; // Αν ο βαθμός δεν είναι έγκυρος, αποθηκεύεται η τιμή 0
    }
}

// Getters 

// Επιστρέφει την τιμή της μεταβλητής firstName
string Student::getFirstName() const {
    return firstName;
}

// Επιστρέφει την τιμή της μεταβλητής lastName
string Student::getLastName() const {
    return lastName;
}

// Επιστρέφει την τιμή της μεταβλητής grade
int Student::getGrade() const {
    return grade;
}


// Εμφανίζει τα δεδομένα του αντικειμένου στην κονσόλα
void Student::print() const {
    cout << "Name: " << firstName << ", Surname: " << lastName << ", Grade: " << grade << endl;
}

