/*
 * Created by Antoine on 8/8/2020.
*/

#include "student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student() {
    /*studentID = "";
    students_firstName = "";
    students_lastName = "";
    students_email = "";
    students_age = 0;
    for (int i = 0; i < 3; ++i)
    {
        students_courseDays[i] = 0;
    }
    stringDegreeProgram = DegreeProgram::SECURITY;*/
}

Student::Student(string stu_ID, string first_name, string last_name, string stu_email, int stu_age, int *daysInCourse, DegreeProgram degree_prog)
{
    studentID = stu_ID;
    students_firstName = first_name;
    students_lastName = last_name;
    students_email = stu_email;
    students_age = stu_age;
    for (int i = 0; i < 3; ++i)
    {
        students_courseDays[i] = daysInCourse[i];
    }
    stringDegreeProgram = degree_prog;
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
    //studentID;
}

void Student::SetFirstName(string students_firstName)
{
    //students_firstName = s;
}

void Student::SetLastName(string students_lastName)
{
    //string stu_lastNames = students_lastName;
}

void Student::SetEmail(string students_email)
{
    //string stu_emails = students_email;
}

void Student::SetAge(int students_age)
{
    //students_age = stu_ages;
}

void Student::SetDegree(DegreeProgram stringDegreeProgram)
{
    DegreeProgram stu_degree = stringDegreeProgram;
}

void Student::SetCourseDays(int *daysInCourse)
{
    /*for(int i = 0; i < 3; ++i) {
        students_courseDays[i] = daysInCourse[i];
    }*/
}

void Student::print()
{
    cout << "Student ID: " << studentID;
    cout << "\t First Name: " << students_firstName << "\t Last Name: " << students_lastName;
    cout << "\t Age: " << students_age << "\t : ";
    cout << "{" << students_courseDays[0] << ", " << students_courseDays[1] << ", " << students_courseDays[2] << "}";
    cout << " Degree Program: " << xyz[(int)stringDegreeProgram] << "." << endl;
}

Student::~Student() {

}