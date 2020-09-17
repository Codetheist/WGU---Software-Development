/*
 * Created by Antoine on 8/8/2020.
*/

#include <iostream>
#include "student.h"
#include <string>

using namespace std;

Student::Student() {

}

Student::Student(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysInCourse, int daysInCourse1, int daysInCourse2, DegreeProgram stringDegreeProgram)
{
    SetStudentID(studentID);
    SetFirstName(students_firstName);
    SetLastName(students_lastName);
    SetEmail(students_email);
    SetAge(students_age);
    SetDegree(stringDegreeProgram);
    SetCourseDays(daysInCourse, daysInCourse1, daysInCourse2);
}

void Student::print()
{
    cout << "Student ID: " << studentID;
    cout << "\t First Name: " << students_firstName << "\t Last Name: " << students_lastName;
    cout << "\t Age: " << students_age << "\t : ";
    cout << "{" << students_courseDays[0] << ", " << students_courseDays[1] << ", " << students_courseDays[2] << "}";
    cout << " Degree Program: " << stringDegreeProgram << "." << endl;
}

//Accessors
string Student::GetStudentsID()
{
    return studentID;
}

string Student::GetFirstName()
{
    return students_firstName;
}

string Student::GetLastName()
{
    return students_lastName;
}

string Student::GetEmail()
{
    return students_email;
}

int Student::GetAge()
{
    return students_age;
}

int *Student::GetCourseDays()
{
    return students_courseDays;
}

DegreeProgram Student::GetDegree()
{
    return stringDegreeProgram;
}

//Mutators
void Student::SetStudentID(string studentID)
{
    string stu_ID = studentID;
    return;
}

void Student::SetFirstName(string students_firstName)
{
    string stu_firstNames = students_firstName;
    return;
}

void Student::SetLastName(string students_lastName)
{
    string stu_lastNames = students_lastName;
    return;
}

void Student::SetEmail(string students_email)
{
    string stu_emails = students_email;
    return;
}

void Student::SetAge(int students_age)
{
    int stu_ages = students_age;
    return;
}

void Student::SetDegree(DegreeProgram stringDegreeProgram)
{

    DegreeProgram stu_degree = stringDegreeProgram;
    return;
}

void Student::SetCourseDays(int daysInCourse, int daysInCourse1, int daysInCourse2)
{
  students_courseDays[0] = daysInCourse;
  students_courseDays[1] = daysInCourse1;
  students_courseDays[2] = daysInCourse2;
    return;
}

Student::~Student() {

}