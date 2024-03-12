#include "GradeManager.h"
#include <iostream>
#include <string>

using namespace std;
int scores10[10];
int GradeManager::addStudentGrade(
    const std::string& student_name, int grade
) {
    grade_by_student_name[student_name] = StudentGrade{ student_name, grade};
    cout << "-студенту: " << student_name;

    for (int i = 0; i < size(scores10); i++) {
        if (scores10[i] == 0) {
            scores10[i] = grade;
            break;
        }
        
    }

    for (int i = 0; i < size(scores10); i++) {
    }

    return scores10[size(scores10)];
}


StudentGrade* GradeManager::findStudentGrade(const std::string& student_name) {

    auto it = grade_by_student_name.find(student_name);
    
    if  (it != grade_by_student_name.end()) {
        return &it->second;

    }
    else {
        return nullptr;
    }
}



