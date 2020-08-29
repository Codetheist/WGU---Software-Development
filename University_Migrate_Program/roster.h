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

class Roster
{
public:
    Roster();
    inputRoster(int maxRosterSize);
    void gatheringStudentInfo(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysIn[], DegreeProgram stringDegreeProgram);
    void deleteStudentInfo(string studentID);
    void allPrinted();
    void daysInCourseAvg(string studentID);
    void nonValidEmailPrinted();
    void degreePrinted(DegreeProgram stringDegreeProgram);

private:
    int lastInput;
    int maxRosterSize;
    Student **stu_class_array;
    string studentID;
    string students_firstName;
    string students_lastName;
    string students_email;
    string students_age;
    int *students_courseDays;
    string stringDegreeProgram;

    ~Roster();
};

#endif //UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H
