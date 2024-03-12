#pragma once
#include <map>
#include <string>

struct StudentGrade {
    std::string student_name;
    int grade;

};


class GradeManager {
private:
    std::map<std::string, StudentGrade> grade_by_student_name;

public:
    int addStudentGrade(const std::string& student_name, int grade);

        
    StudentGrade* findStudentGrade(const std::string& student_name);

};