#ifndef STUDENT_H
#define STUDENT_H

#include <string> // ���������� ��� ����� �������������
using namespace std;

// ������� ��� ������ Student
class Student {
private:
    string firstName; // �� ����� ��� ������
    string lastName;  // �� ������� ��� ������
    int grade;        // � ������ ��� ������ (����� ��� 0 ��� 10)

public:
    // ������������� ��� ������������
    Student();  // ���������� ��� ����������� Student �� default �����
    ~Student(); // ������� ��������� ���� ������������� �� �����������

    // Setters (������� ��� �� ������� ����� ���� ����������)
    void setFirstName(const string& name);  // ������ �� ����� ��� ������
    void setLastName(const string& surname); // ������ �� ������� ��� ������
    void setGrade(int grade);               // ������ ��� ����� ��� ������

    // Getters (������� ��� �� ��������� ��� ����� ��� ����������)
    string getFirstName() const; // ���������� �� ����� ��� ������
    string getLastName() const;  // ���������� �� ������� ��� ������
    int getGrade() const;        // ���������� ��� ����� ��� ������

    // ������� ���������
    void print() const; // ��������� �� �������� ��� ������
};

#endif

