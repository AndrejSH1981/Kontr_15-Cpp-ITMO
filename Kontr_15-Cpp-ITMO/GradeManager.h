#pragma once
#include <map>
#include <string>

using namespace std;

struct StudentGrade {
    string student_name;
    int grade;
};


class GradeManager {
private:
    map<string, StudentGrade> grade_by_student_name;

public:
    int addStudentGrade(const string& student_name, int grade);
        
    StudentGrade* findStudentGrade(const string& student_name);
};
