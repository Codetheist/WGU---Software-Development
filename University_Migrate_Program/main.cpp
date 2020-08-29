/*
 * Created by Antoine on 8/8/2020.
*/

#include "student.h"
#include "roster.h"
#include "degree.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Antoine,Gustave,agust22@my.wgu.edu,28,40,50,60,SOFTWARE",
    };

    int maxStudents = 5;

    Roster *classRoster = new Roster(maxStudents);

    cout << "C867 Scrpiting and Programming Applications" << endl;
    cout << "C++ Student ID:001438671 Antoine Gustave" << endl;

    cout << endl;

    for (int i = 0; i < maxStudents; i++)
    {
        classRoster->gatheringStudentInfo(studentData[i]);
    }

    cout << "Student Roster:" << endl;
    classRoster.printAll();

    cout << endl;

    cout << "Invalid Emails:" << endl;
    classRoster.nonValidEmailPrinted();

    cout << "Students average of days in course:" << endl;
    for (int i = 0; i < maxStudents; i++)
    {
        // classRoster->daysInCourseAvg(classRoster->)
    }

    classRoster.degreePrinted(SOFTWARE);

    classRoster.deleteStudentInfo("A3");

    classRoster.allPrinted();

    classRoster->deleteStudentInfo("A3");

    return 0;
}
