#pragma once
#include <string>
#include "Id.h"

using namespace std;

class Student {
public:
    // ����������� ������ Student
    Student(string, string, Id*);
    Student();

    // ��������� �����
    void set_name(string);
    // ��������� �����
    string get_name();
    // ��������� �������
    void set_last_name(string);
    // ��������� �������
    string get_last_name();
    // ��������� ������������� ������ � ���������� �������� �����
    void set_scores(int[]);
    // �������� �����
    void set_average_score(double);
    // ��������� �������� �����
    double get_average_score();
    // ����� ������ � ��������
    void display() const;

    void setId(Id* c);
    Id getId();

    friend bool operator<(const Student&, const Student&);
    friend bool operator>(const Student&, const Student&);
    friend bool operator==(const Student&, const Student&);
    friend bool operator!=(const Student&, const Student&);

private:
    // ������
    int scores10[10];
    // ������� ����
    double average_score;
    // ���
    string name;
    // �������
    string last_name;
    // id
    Id* idnum;
};

class compareStudent {
public:
    bool operator()(const Student* ptrSt1, const Student* ptrSt2) const {
        return *ptrSt1 < *ptrSt2;
    }
};