/*
 * Created by Antoine on 8/8/2020.
*/

#ifndef UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H
#define UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H

#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"
#include "degree.h"
using namespace std;

class Roster {
public:
    inputRoster(int maxRosterSize);
    void gatheringStudentInfo(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int students_courseDays[], Degree students_degree);
    void delete(string studentID);
    void allPrinted();
    void daysInCourse(string studentID);
    void nonValidEmailPrinted();
    void degreePrinted(Degree students_degree);

private:
    int lastInput;
    int maxRosterSize;
    Student **stu;
    string studentID;
    string students_firstName;
    string students_lastName;
    string students_email;
    string students_age;
    int *students_courseDays;
    string students_degree;

    ~Roster();
};

#endif //UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H
