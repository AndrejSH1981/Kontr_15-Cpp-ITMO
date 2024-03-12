#include "Student.h"
#include "Group.h"
#include <iostream>
#include <string>

using namespace std;

// ����������� Student
Student::Student(string name, string last_name, Id* id) {
    Student::set_name(name);
    Student::set_last_name(last_name);
    Student::setId(id);
    Student::set_average_score(0);
}

Student::Student() {}
// ��������� ����� ��������
int y = 0;
void Student::set_name(std::string student_name) {
    Student::name = student_name;
    y = y + 1;
    cout << "    -" << y << "." << name << endl;
    
}

// ��������� ����� ��������
std::string Student::get_name() {
    return Student::name;
}

// ��������� ������� ��������
void Student::set_last_name(std::string student_last_name) {
    Student::last_name = student_last_name;
}

// ��������� ������� ��������
std::string Student::get_last_name() {
    return Student::last_name;
    cout << "    --" << last_name << endl;
    ;
}

// ��������� ������������� ������ � ���������� �������� �����
void Student::set_scores(int scores[]) {
    int chislo = 0;
    double sum = 0;
    double ball = 0;
    for (int i = 0; i < 10; ++i) {
        Student::scores10[i] = scores[i];

        if (scores10[i] != 0) {
            chislo = chislo + 1;
            sum = sum + scores10[i];
        }
        ball = sum / chislo;
    }
    set_average_score(ball);
    
}

// �������� �����
void Student::set_average_score(double ball) {

    Student::average_score = ball;
    
}

// ��������� �������� �����
double Student::get_average_score() {

    return Student::average_score;
}

void Student::setId(Id* cart) {
    idnum = cart;
}

Id Student::getId() {
    return *idnum;
}

void Student::display() const  // ����� ������ � ��������
{
    cout << " " << endl;
    cout << last_name << " " << name << "; ������� ���� = " << average_score << "; id: "
        << idnum->getNumber() << "; ���.���.: " << idnum->get_dopInf() << endl;
}

bool operator==(const Student& p1, const Student& p2) {
    return (p1.name == p2.name && p1.last_name == p2.last_name) ? true : false;
}

bool operator<(const Student& p1, const Student& p2) {
    if (p1.last_name == p2.last_name) return (p1.name < p2.name) ? true : false;
    return (p1.last_name < p2.last_name) ? true : false;
}

bool operator!=(Student& p1, Student& p2) {
    return !(p1 == p2);
}

bool operator>(Student& p1, Student& p2) {
    return !(p1 < p2) && !(p2 == p2);
}