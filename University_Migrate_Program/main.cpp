/*
 * Created by Antoine on 8/8/2020.
*/

#include "student.cpp"
#include "roster.cpp"

#include <iostream>
#include <string>
using namespace std;

int main() {

    void Student::PrintStudentsData() {
        int *days = GetCourseDays();
        cout << "Student ID: " << GetStudentsID();
        cout << "\t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName();
        cout << "\t Email: " << GetEmail();
        cout << "\t Age: " << GetAge() << "\t : ";
        cout << "{" << days[0] << ", " << days[1] << ", " << days[2] << "}";
        cout << " Degree Program: " << GetDegree() << "." endl;
    }

    return 0;
}
