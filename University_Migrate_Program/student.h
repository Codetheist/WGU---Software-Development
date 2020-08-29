/*
 * Created by Antoine on 8/8/2020.
*/

#ifndef UNIVERSITY_MIGRATE_PROGRAM_STUDENT_H
#define UNIVERSITY_MIGRATE_PROGRAM_STUDENT_H

#include "degree.h"
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student();
    Student(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysIn[], DegreeProgram stringDegreeProgram);

    //Accessors
    string GetStudentsID();
    string GetFirstName();
    string GetLastName();
    string GetEmail();
    string GetAge();
    int *GetCourseDays[3];
    DegreeProgram GetDegree();

    // Mutators
    void SetStudentID(string studentID);
    void SetFirstName(string students_firstName);
    void SetLastName(string students_lastName);
    void SetEmail(string students_email);
    void SetAge(int students_age);
    void SetCourseDays(int students_courseDays[3]);
    void SetDegree(DegreeProgram stringDegreeProgram);

    void PrintStudentsData();
    ~Student();

private:
    string studentID;
    string students_firstName;
    string students_lastName;
    string students_email;
    int students_age;
    int students_courseDays[3];
    DegreeProgram stringDegreeProgram;
};

#endif //UNIVERSITY_MIGRATE_PROGRAM_STUDENT_H
