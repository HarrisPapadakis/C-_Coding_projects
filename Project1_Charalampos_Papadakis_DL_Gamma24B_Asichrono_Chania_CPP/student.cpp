#include "student.h" // ����������� ��� ������� header ��� ��� ������ ��� ������ Student
#include <iostream>  // ���������� ��� input/output
using namespace std;

// �������������

Student::Student() : firstName(""), lastName(""), grade(0) {}

// ������������

Student::~Student() {}

// Setters

// ������ ��� ���� ��� ���������� firstName
void Student::setFirstName(const string& name) {
    firstName = name;
}

// ������ ��� ���� ��� ���������� lastName
void Student::setLastName(const string& surname) {
    lastName = surname;
}

// ������ ��� ����  grade
// ������� �� � ������ ����� ������� (0-10) ���� ��� �����������
void Student::setGrade(int gradeValue) {
    if (gradeValue >= 0 && gradeValue <= 10) {
        grade = gradeValue; // �� � ������ ����� �������, ������������ ��������
    } else {
        grade = 0; // �� � ������ ��� ����� �������, ������������ � ���� 0
    }
}

// Getters 

// ���������� ��� ���� ��� ���������� firstName
string Student::getFirstName() const {
    return firstName;
}

// ���������� ��� ���� ��� ���������� lastName
string Student::getLastName() const {
    return lastName;
}

// ���������� ��� ���� ��� ���������� grade
int Student::getGrade() const {
    return grade;
}


// ��������� �� �������� ��� ������������ ���� �������
void Student::print() const {
    cout << "Name: " << firstName << ", Surname: " << lastName << ", Grade: " << grade << endl;
}

