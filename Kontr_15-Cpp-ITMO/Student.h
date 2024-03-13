#pragma once
#include <string>
#include "Id.h"

using namespace std;

class Student {
public:
    // Конструктор класса Student
    Student(string, string, Id*);
    Student();
 

    // Установка имени
    void set_name(string);
    // Получение имени
    string get_name();
    // Установка фамилии
    void set_last_name(string);
    // Получение фамилии
    string get_last_name();
    // Установка промежуточных оценок и вычисление среднего балла
    void set_scores(int[]);
    // Среднего балла
    void set_average_score(double);
    // Получение среднего балла
    double get_average_score();
    // вывод данных о студенте
    void display() const;

    void setId(Id* c);
    Id getId();

    friend bool operator<(const Student&, const Student&);
    friend bool operator>(const Student&, const Student&);
    friend bool operator==(const Student&, const Student&);
    friend bool operator!=(const Student&, const Student&);

private:
    // Установка промежуточных оценок и вычисление среднего балла
    int chislo;
    double sum;
    double ball;
    int scores10[10];
    // Средний балл
    double average_score;
    // Имя
    string name;
    // Фамилия
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
