/*
 * Created by Antoine on 8/8/2020.
*/

#include "student.h"

Student::Students() {
    student_ID = "";
    stu_firstNames = "";
    stu_lastNames = "";
    stu_emails = "";
    stu_ages = "";
    amountOfDaysInCourse = int[];
}

Student::Students(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int* students_courseDays[], Degree students_degree) {
    student_ID = studentID;
    stu_firstNames = students_firstName;
    stu_lastNames = students_lastName;
    stu_emails = students_email;
    stu_ages = students_age;
    amountOfDaysInCourse = int[];
    for (int i = 0; i < amountOfDaysInCourse.size(); ++i) {
        amountOfDaysInCourse = students_courseDays[i];
    }
}

//Accessors
string GetStudentsID() {
    return studentID;
}

string GetFirstName() {
    return students_firstName;
}

string GetLastName() {
    return students_lastName;
}

string GetEmail() {
    return students_email;
}

string GetAge() {
    return students_age;
}

int *GetCourseDays() {
    return students_courseDays;
}

Degree Student::GetDegree() {
    return students_degree;
}

//Mutators
void SetStudentID(string studentID) {
    student_ID = studentID;
    return;
}

void SetFirstName(string students_firstName) {
    stu_firstNames = students_firstName;
    return;
}

void SetLastName(string students_lastName) {
    stu_lastNames = students_lastName;
    return;
}

void SetEmail(string students_email) {
    stu_emails = students_email;
    return;
}

void SetAge(int students_age) {
    stu_ages = students_age;
    return;
}

void SetCourseDays(int students_courseDays[]) {

    for (int i = 0; i < amountOfDaysInCourse.size(); ++i) {
        amountOfDaysInCourse = students_courseDays[i];
    }
}