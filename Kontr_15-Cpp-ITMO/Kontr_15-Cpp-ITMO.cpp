// Kontr_15-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "GradeManager.h"
#include "Id.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int printStudentGrade(StudentGrade* grade) {
    int grade0 = 0;
    if (grade) {
        wcout << L" поставленная Оценка: ";
        cout << grade->grade << endl;
        grade0 = int(grade);
    }
    else {
        wcout << L"Оценка не найдена" << endl;
    }
    return grade->grade;
}

int *massStudent1(int grade0) {
    static int scores10[10];
    for (int i = 0; i < size(scores10); i++) {
    }  
    for (int i = 0; i < size(scores10); i++) {
        if (scores10[i] <= 0) {
            scores10[i] = grade0;
            break;
        }
    }
    return scores10;
}
int* massStudent2(int grade0) {
    static int scores10[10];
    for (int i = 0; i < size(scores10); i++) {
    }
    for (int i = 0; i < size(scores10); i++) {
        if (scores10[i] <= 0) {
            scores10[i] = grade0;
            break;
        }
    }
    return scores10;
}
int* massStudent3(int grade0) {
    static int scores10[10];
    for (int i = 0; i < size(scores10); i++) {
    }
    for (int i = 0; i < size(scores10); i++) {
        if (scores10[i] <= 0) {
            scores10[i] = grade0;
            break;
        }
    }
    return scores10;
}
int* massStudent4(int grade0) {
    static int scores10[10];
    for (int i = 0; i < size(scores10); i++) {
    }
    for (int i = 0; i < size(scores10); i++) {
        if (scores10[i] <= 0) {
            scores10[i] = grade0;
            break;
        }
    }
    return scores10;
}


int main() {

    setlocale(LC_CTYPE, "rus");

    Id* id1 = new Id(112233, "Технологический ф-т");
    Id* id2 = new Id(654321, "Технологический ф-т");
    Id* id3 = new Id(1234567890, "Экономический ф-т");
    Id* id4 = new Id(55555, "Технико-экономический ф-т");
    GradeManager grades;
    int* mas1;
    int* mas2;
    int* mas3;
    int* mas4;
    cout << "Имена студентов: " << endl;
    Student student1("Петр", "Петров", id1); 
    Student student2("Семен", "Смирнов", id2);
    Student student3("Student", "Inturist", id3);
    Student student4("Некто", "Инкогнито", id4);

 
    int num = 0;
label:
    wcout << L"Выберите студента: ";
    int labelStud = 0;
    int nameStud = 0;
    cin >> nameStud;
    if (nameStud == 1) {
        wcout << L"-Поставить оценку выбранному студенту:";
        cin >> num;
        grades.addStudentGrade(student1.get_name(), num);
        StudentGrade* grade1 = grades.findStudentGrade(student1.get_name());
        int grade0 = printStudentGrade(grade1);
        mas1 = massStudent1(grade0);
       
        wcout << L"\n-выберите действие:\n1-ещё оценка\n2-конец\n";
        int v = 0;
        cin >> v;
        if (v == 1) {
            goto label;
        }
        if (v == 2) {
            wcout << L"все оценки выбранного студента:";
            for (int i = 0; i < 10; i++) {
                cout << mas1[i] << ", ";
            }
            student1.set_scores(mas1);
            student1.display();
            goto label0;
        }
    }
    if (nameStud == 2) {
        wcout << L"-Поставить оценку выбранному студенту:";
        cin >> num;
        grades.addStudentGrade(student2.get_name(), num);
        StudentGrade* grade2 = grades.findStudentGrade(student2.get_name());
        int grade0 = printStudentGrade(grade2);
        cout << "grade0=" << grade0 << endl;
        mas2 = massStudent2(grade0);
       
        wcout << L"\n-выберите действие:\n1-ещё оценка\n2-конец\n";
        int v = 0;
        cin >> v;
        if (v == 1) {
            goto label;
        }
        if (v == 2) {
            wcout << L"все оценки выбранного студента:";
            for (int i = 0; i < 10; i++) {
                cout << mas2[i] << ", ";
            }
            student2.set_scores(mas2);
            student2.display();
            goto label0;
        }
    }
    if (nameStud == 3) {
        wcout << L"-Поставить оценку выбранному студенту:";
        cin >> num;
        grades.addStudentGrade(student3.get_name(), num);
        StudentGrade* grade3 = grades.findStudentGrade(student3.get_name());
        int grade0 = printStudentGrade(grade3);
        cout << "grade0=" << grade0 << endl;
        mas3 = massStudent3(grade0);

        wcout << L"\n-выберите действие:\n1-ещё оценка\n2-конец\n";
        int v = 0;
        cin >> v;
        if (v == 1) {
            goto label;
        }
        if (v == 2) {
            wcout << L"все оценки выбранного студента:";
            for (int i = 0; i < 10; i++) {
                cout << mas3[i] << ", ";
            }
            student3.set_scores(mas3);
            student3.display();
            goto label0;
        }
    }
    if (nameStud == 4) {
        wcout << L"-Поставить оценку выбранному студенту:";
        cin >> num;
        grades.addStudentGrade(student4.get_name(), num);
        StudentGrade* grade4 = grades.findStudentGrade(student4.get_name());
        int grade0 = printStudentGrade(grade4);
        cout << "grade0=" << grade0 << endl;
        mas4 = massStudent4(grade0);
        
        wcout << L"\n-выберите действие:\n1-ещё оценка\n2-конец\n";
        int v = 0;
        cin >> v;
        if (v == 1) {
            student4.set_scores(mas4);

            goto label;
        }
        if (v == 2) {
            wcout << L"все оценки выбранного студента:";
            for (int i = 0; i < 10; i++) {
                cout << mas4[i] << ", ";
            }
            student4.display();
            goto label0;
        }
    }
    label0:
    wcout << L"\nконец\n";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
