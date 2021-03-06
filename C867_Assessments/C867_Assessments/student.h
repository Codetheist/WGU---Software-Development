#pragma once
/*
 * Created by Antoine on 8/8/2020.
*/

#include "degree.h"
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student();
    Student(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int *daysInCourse, DegreeProgram stringDegreeProgram);
    
    //Accessors
    string GetStudentsID();
    string GetFirstName();
    string GetLastName();
    string GetEmail();
    int GetAge();
    int *GetCourseDays();
    DegreeProgram GetDegree();

    // Mutators
    void SetStudentID(string studentID);
    void SetFirstName(string students_firstName);
    void SetLastName(string students_lastName);
    void SetEmail(string students_email);
    void SetAge(int students_age);
    void SetCourseDays(int *daysInCourse);
    void SetDegree(DegreeProgram stringDegreeProgram);

    void print();
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