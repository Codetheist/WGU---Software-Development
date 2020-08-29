/*
 * Created by Antoine on 8/8/2020.
*/

#include "roster.h"
#include "degree.h"
#include "student.h"
#include <string>
#include <iostream>

using namespace std;

Roster::Roster()
{
    this->lastInput = -1;
    this->maxRosterSize = 0;
    this->stu_class_array = nullptr;
}

Roster::Roster(int maxRosterSize)
{
    this->maxRosterSize = maxRosterSize;
    this->lastInput = -1;
    this->stu_class_array = new Student *[maxRosterSize];
};

void Roster::gatheringStudentInfo(int studentID)
{

    if (/* condition */)
    {
        /* code */
    }

    gatheringStudentInfo(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysIn[], DegreeProgram stringDegreeProgram);
}

void Roster::deleteStudentInfo(string studentID)
{

    bool isExisted = false;
    for (int i = 0; i < lastInput; ++i)
    {
        if (stu_class_array[i]->GetStudentsID() == studentID)
        {
            isExisted = true;
            delete this->stu_class_array[i];

            cout << "Student ID number: " << studentID << " has been removed." << endl;
            stu_class_array[i] = stu_class_array[lastInput];
            --lastInput;
        }

        if (!isExisted)
        {
            cout << "Student ID number: " << studentID << " does not exist." << endl;
        }

        return isExisted;
    }
}

void Roster::allPrinted()
{
    for (int i = 0; i <= lastInput; i++)
    {
        stu_class_array[i]->PrintStudentsData();
    }
}

void Roster::daysInCourseAvg(string studentID)
{

    int getAvg = 0;

    for (int i = 0; i < 5; i++)
    {
        string stu_temp_id = stu_class_array[i]->GetStudentsID();
        if (stu_temp_id = studentID)
        {
            getAvg = ((stu_class_array[i]->GetCourseDays()[0] + stu_class_array[i]->GetCourseDays()[1] + stu_class_array[i]->GetCourseDays()[2]) / 3);
            cout << "The average of student ID number: " << studentID << " is: " << getAvg << endl;
        }
    }
}

void Roster::nonValidEmailPrinted()
{
    for (int i = 0; i < 5; i++)
    {
        string stu_temp_email = stu_class_array[i]->GetEmail();
        if ((stu_temp_email.find("@") == string::npos || stu_temp_email.find(".") == string::npos) || (stu_temp_email.find(" ") != string::npos))
        {
            cout << stu_temp_email << endl;
        }
    }
}

void Roster::degreePrinted(DegreeProgram stringDegreeProgram)
{
    for (int i = 0; i < 5; i++)
    {
        DegreeProgram stu_temp_degree = stu_class_array[i]->GetDegree();
        if (stu_temp_degree == stringDegreeProgram)
        {
            stu_class_array[i]->PrintStudentsData();
        }
    }
}

void Roster::gatheringStudentInfo(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysIn[], DegreeProgram stringDegreeProgram)
{

    for (int i = 0; i < 3; ++i)
    {
        students_courseDay[i] = daysIn[i];
    }

    stu_class_array[lastInput] = new Student(studentID, students_firstName, students_lastName, students_email, students_age, daysIn[], stringDegreeProgram);
}

Roster::~Roster()
{
    for (int i = 0; i < 5; i++)
    {
        delete stu_class_array[i];
    }

    delete stu_class_array;
}
