/*
 * Created by Antoine on 8/8/2020.
*/

#include "student.h"
#include "roster.h"
#include "degree.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

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

  Roster* classRoster = new Roster(maxStudents);

  cout << "C867 Scrpiting and Programming Applications" << endl;
  cout << "C++ Student ID:001438671 Antoine Gustave" << endl;

  cout << endl;

    for (int i = 0; i < 5; ++i) {
        classRoster->parseAndAdd(studentData[i]);
    }
    
    classRoster->printAll();
    classRoster->printInvalidEmails();
    
    //loop through classRosterArray and for each element:
    classRoster->printAverageDaysInCourse("A5");
    
    classRoster->printByDegreeProgram(SOFTWARE);
    classRoster->remove("A3");
    classRoster->printAll();
    classRoster->remove("A3");



  return 0;
}