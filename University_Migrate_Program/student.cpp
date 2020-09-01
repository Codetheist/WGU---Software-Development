/*
 * Created by Antoine on 8/8/2020.
*/

#include <iostream>
#include "student.h"
#include <string>

using namespace std;

Student::Student() {
    this->studentID = "";
    this->students_firstName = "";
    this->students_lastName = "";
    this->students_email = "";
    this->students_age = 0;
    for (int i = 0; i < 3; ++i) {
        this->students_courseDays[i] = 0;
    }
    this->stringDegreeProgram = DegreeProgram::None;

}

Student::Student(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int students_courseDays[], DegreeProgram stringDegreeProgram)
{
    this->studentID = studentID;
    this->students_firstName = students_firstName;
    this->students_lastName = students_lastName;
    this->students_email = students_email;
    this->students_age = students_age;
    for (int i = 0; i < 3; ++i) {
        this->students_courseDays[i] = students_courseDays[i];
    }
    this->stringDegreeProgram = stringDegreeProgram;

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

int* Student::GetCourseDays()
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
    this->studentID = studentID;
    return;
}

void Student::SetFirstName(string students_firstName)
{
    this->students_firstName = students_firstName;
    return;
}

void Student::SetLastName(string students_lastName)
{
    this->students_lastName = students_lastName;
    return;
}

void Student::SetEmail(string students_email)
{
    this->students_email = students_email;
    return;
}

void Student::SetAge(int students_age)
{
    this->students_age = students_age;
    return;
}

void Student::SetCourseDays(int students_courseDays[])
{
    for (int i = 0; i < 3; ++i) {
        this->students_courseDays[i] = students_courseDays[i];
    }
    return;
}

void Student::SetDegree(DegreeProgram stringDegreeProgram)
{

    this->stringDegreeProgram = stringDegreeProgram;
    return;
}

void Student::print()
{
    cout << "Student ID: " << GetStudentsID();
    cout << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName();
    cout << "\t Age: " << GetAge() << "\t : ";
    cout << "{" << daysCourse[0] << ", " << daysCourse[1] << ", " << daysCourse[2] << "}";
    cout << " Degree Program: " << degreePrgrm[(int)GetDegree()] << "." << endl;
}

Student::~Student() {

}