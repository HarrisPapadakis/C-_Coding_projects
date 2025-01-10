#include <iostream> // ���������� ��� input/output ���� �������
#include <locale>   // ���������� ��� greek language
#include "student.h" // ���������� ��� �������� ��� ������ ��� ������ Student
using namespace std;

// ��������� create
// ���������� ��� ��� ����������� Student, ������������ �������� ��� ��� �������
Student create(const Student& s1, const Student& s2) {
    Student s3; // ���������� ��� ���� ������
    s3.setFirstName(s1.getFirstName()); // ������� �� ����� ��� ��� ����� ������
    s3.setLastName(s2.getLastName());   // ������� �� ������� ��� ��� ������� ������
    s3.setGrade((s1.getGrade() + s2.getGrade()) / 2); // ���������� ��� ���� ��� ��� ������
    return s3; // ���������� ��� ��� ������
}

int main() {
    // ������� ��� ���������� ��������� ����������
    setlocale(LC_ALL, "el_GR.UTF-8");

    // ���������� ��� ������ ������
    Student student1;
    student1.setFirstName("����������"); // ����� ��� ������ ������
    student1.setLastName("���������"); // ������� ��� ������ ������
    student1.setGrade(8); // ������ ��� ������ ������

    // ���������� ��� �������� ������
    Student student2;
    student2.setFirstName("������"); // ����� ��� �������� ������
    student2.setLastName("��������"); // ������� ��� �������� ������
    student2.setGrade(6); // ������ ��� �������� ������

    // �������� ��� ��������� ������ ������
    cout << "������� 1:" << endl;
    student1.print(); // ��������� �� �����, �� ������� ��� ��� ����� ��� ������ ������

    // �������� ��� ��������� �������� ������
    cout << "������� 2:" << endl;
    student2.print(); // ��������� �� �����, �� ������� ��� ��� ����� ��� �������� ������

    // ���������� ��� ������ ������ ��������������� �� ��������� create
    Student student3 = create(student1, student2);

    // �������� ��� ��������� ��� ������ ������
    cout << "������� 3 (�������������):" << endl;
    student3.print(); // ��������� �� �������� �����, �� ������� ��� ��� ���� ��� ������ ��� ������ ������

    return 0; // ����� ��� ������������
}

