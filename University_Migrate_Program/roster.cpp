
/*
 * Created by Antoine on 8/8/2020.
*/

#include "roster.h"
#include "degree.h"
#include "student.h"
#include <string>
#include <iostream>

using namespace std;

Roster::Roster () 
{
    this->lastInput = -1;
    this->maxRosterSize = 0;
    this->classRosterArray = nullptr;
}

Roster::Roster (int maxRosterSize) 
{
    this->maxRosterSize = maxRosterSize;
    this->lastInput = -1;
    this->classRosterArray = new Student * [maxRosterSize];
};

void Roster::parseAndAdd(int students_row) {
    if (lastInput < maxRosterSize) {
        ++lastInput;
    }

    int rightBreak = students_row.find(",");
    string studentID = students_row.substr(0, rightBreak);

    int leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    string students_firstName = students_row.substr(leftBreak, rightBreak - leftBreak);

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    string students_lastName = students_row.substr(leftBreak, rightBreak - leftBreak);

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    string students_email = students_row.substr(leftBreak, rightBreak - leftBreak);

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    string place_age =  = students_row.substr(leftBreak, rightBreak - leftBreak);
    int students_age = stoi(place_age);

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    int students_courseDays = stoi(students_row.substr(leftBreak, rightBreak - leftBreak));

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    int students_courseDays1 = stoi(students_row.substr(leftBreak, rightBreak - leftBreak));

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    int students_courseDays2 = stoi(students_row.substr(leftBreak, rightBreak - leftBreak));

    leftBreak = rightBreak + 1;
    rightBreak = students_row.find(",", leftBreak);
    DegreeProgram stringDegreeProgram
    string degrees = students_row.substr(leftBreak, rightBreak - leftBreak);
    if (degrees == "SOFTWARE") {
        stringDegreeProgram = DegreeProgram::SOFTWARE;
    } else if (degress == "SECURITY") {
        stringDegreeProgram = DegreeProgram::SECURITY;
    }else if (degrees == "NETWORK") {
        stringDegreeProgram = DegreeProgram::NETWORK;
    }

    add(studentID, students_firstName, students_lastName, students_email, students_age, students_courseDays, students_courseDays1, students_courseDays2, stringDegreeProgram);
}

bool Roster::remove(int studentID) {

    bool isExisted = false;

    for (int i = 0; i < lastInput; ++i)
    {
        if (classRosterArray[i]->GetStudentsID() == studentID)
        {
            isExisted = true;
            delete this->classRosterArray[i];

            cout << "Student ID number: " << studentID << " has been removed." << endl;
            classRosterArray[i] = classRosterArray[lastInput];

            --lastInput;
        }

        if (!isExisted)
        {
            cout << "Student ID number: " << studentID << " does not exist." << endl;
        }
    }
}

void Roster::printAverageDaysInCourse(int studentID) {

    int getAve = 0;

    for (int i = 0; i < 5; i++)
    {
        string stu_temp_id = classRosterArray[i]->GetStudentsID();

        if (stu_temp_id == studentID)
        {
            getAvg = ((classRosterArray[i]->GetCourseDays()[0] + classRosterArray[i]->GetCourseDays()[1] + classRosterArray[i]->GetCourseDays()[2]) / 3);

            cout << "The average of student ID number: " << studentID << " is: " << getAvg << endl;
        }
    }
}

void Roster::printInvalidEmails() {

    for (int i = 0; i < 5; i++)
    {
        string stu_temp_email = classRosterArray[i]->GetEmail();

        if ((stu_temp_email.find ("@") == string::npos || stu_temp_email.find (".") == string::npos) || (stu_temp_email.find (" ") != string::npos))
        {
            cout << stu_temp_email << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram stringDegreeProgram) {
    for (int i = 0; i < 5; i++) {

        DegreeProgram stu_temp_degree = classRosterArray[i]->GetDegree();

        if (stu_temp_degree == stringDegreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::add(int studentID, int students_firstName, int students_lastName, int students_email, int students_age,
                 int students_courseDays, int students_courseDays1, int students_courseDays2,
                 DegreeProgram stringDegreeProgram) {

    int students_courseDay[3];

    students_courseDay[0] = students_courseDays;
    students_courseDay[1] = students_courseDays1;
    students_courseDay[2] = students_courseDays2;

    classRosterArray[lastInput] = new Student (studentID, students_firstName, students_lastName, students_email, students_age, students_courseDay, stringDegreeProgram);
}

Student* Roster::GetInfo(int lastInput) {
    return classRosterArray[lastInput];
}

Roster::~Roster() {
    for (int i = 0; i < 5; ++i) {
        delete classRosterArray[i];
    }
    delete classRosterArray;
}