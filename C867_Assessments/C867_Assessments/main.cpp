/*
 * Created by Antoine on 8/8/2020.
*/

#include "roster.h"
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
  
  Roster *classRoster = new Roster(maxStudents);

  cout << "C867 Scrpiting and Programming Applications" << endl;
  cout << "C++ Student ID:001438671 Antoine Gustave" << endl;

  cout << endl;
  
  for (int i = 0; i < maxStudents; i++)
  {
      DegreeProgram degrees{};
      stringstream stu_data(studentData[i]);
      string rmstr;	
      string output[9];
      
      int a = 0;
      while(getline(stu_data, rmstr, ',')) {
          output[a] = rmstr;
          a += 1;
      }
      
      if (output[8] == "SOFTWARE")
      {
          degrees = DegreeProgram::SOFTWARE;
      }
      
      else if (output[8] == "NETWORK")
      {
          degrees = DegreeProgram::NETWORK;
      }
      
      else if (output[8] == "SECURITY")
      {
          degrees = DegreeProgram::SECURITY;
      }
      
      else
      {
          cout << "Degree does not exist" << endl;
      }
      
      classRoster->add(output[0], output[1], output[2], output[3], stoi(output[4]), stoi(output[5]), stoi(output[6]), stoi(output[7]), degrees);
  }
  
  classRoster->printAll();
  classRoster->printInvalidEmails();
  
  //loop through classRosterArray and for each element:
  classRoster->printAverageDaysInCourse("A5");
  classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);
  classRoster->remove("A3");
  classRoster->printAll();
  classRoster->remove("A3");
  
  return 0;
}