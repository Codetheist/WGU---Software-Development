#pragma once
/*
 * Created by Antoine on 8/8/2020.
*/

#include <iostream>
#include <string>
#include "student.h"
using namespace std;

class Roster
{
public:
  Roster();
  Roster(int maxRosterSize);
  Student** classRosterArray;
  //void parseAndAdd(string students_row);
  void add(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int daysInCourse, int daysInCourse1, int daysInCourse2, DegreeProgram stringDegreeProgram);
  void remove(string studentID);
  void printAll();
  void printAverageDaysInCourse(string studentID);
  void printInvalidEmails();
  void printByDegreeProgram(DegreeProgram stringDegreeProgram);

  int lastInput;
  int maxRosterSize;
  
  ~Roster();
};