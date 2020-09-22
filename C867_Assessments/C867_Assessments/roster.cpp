/*
 * Created by Antoine on 8/8/2020.
*/

#include "roster.h"
#include <string>
#include <iostream>

using namespace std;

Roster::Roster()
{
    this->lastInput = -1;
    this->maxRosterSize = 0;
    this->classRosterArray = nullptr;
}



Roster::Roster(int maxRosterSize)
{
    this->maxRosterSize = maxRosterSize;
    this->lastInput = -1;
    this->classRosterArray = new Student * [maxRosterSize];
};

void Roster::add(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysInCourse, int daysInCourse1, int daysInCourse2, DegreeProgram stringDegreeProgram)
{
    int students_courseDay[3];


    students_courseDay[0] = daysInCourse;
    students_courseDay[1] = daysInCourse1;
    students_courseDay[2] = daysInCourse2;

    classRosterArray[++lastInput] = new Student(studentID, students_firstName, students_lastName, students_email, students_age, students_courseDay, stringDegreeProgram);
}

void Roster::remove(string studentID)
{
    bool isExisted = false;

    for (int i = 0; i < 5; ++i)
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

void Roster::printAll()
{
    for (int i = 0; i <= lastInput; i++)
    {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    int getAvg = 0;

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



void Roster::printInvalidEmails()
{
    for (int i = 0; i < 5; i++)
    {
        string stu_temp_email = classRosterArray[i]->GetEmail();

        if ((stu_temp_email.find("@") == string::npos || stu_temp_email.find(".") == string::npos) || (stu_temp_email.find(" ") != string::npos))
        {
            cout << stu_temp_email << endl;
        }
    }
}



void Roster::printByDegreeProgram(DegreeProgram stringDegreeProgram)
{
    for (int i = 0; i < 5; i++)
    {
        DegreeProgram stu_temp_degree = classRosterArray[i]->GetDegree();

        if (stu_temp_degree == stringDegreeProgram)
        {
            classRosterArray[i]->print();
        }
    }
}

Roster::~Roster()
{
    for (int i = 0; i < 5; i++)
    {
        delete classRosterArray[i];
    }

    delete classRosterArray;
}