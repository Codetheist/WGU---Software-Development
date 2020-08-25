/*
 * Created by Antoine on 8/8/2020.
*/

#ifndef UNIVERSITY_MIGRATE_PROGRAM_STUDENT_H
#define UNIVERSITY_MIGRATE_PROGRAM_STUDENT_H

#include "degree.h"
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Students(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int* students_courseDays[], Degree students_degree)

    //Accessors
    string GetStudentsID();
    string GetFirstName();
    string GetLastName();
    string GetEmail();
    string GetAge();
    int *GetCourseDays();
    Degree GetDegree();

    // Mutators
    void SetStudentID(string studentID);
    void SetFirstName(string students_firstName);
    void SetLastName(string students_lastName);
    void SetEmail(string students_email);
    void SetAge(int students_age);
    void SetCourseDays(int students_courseDays[]);
    void SetDegree(Degree students_degree);

    void PrintStudentsData();
    ~Student();

protected:
    string studentID;
    string students_firstName;
    string students_lastName;
    string students_email;
    int students_age;
    int students_courseDays[];
    Degree students_degree;
};

#endif //UNIVERSITY_MIGRATE_PROGRAM_STUDENT_H
