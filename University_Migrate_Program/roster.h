/*
 * Created by Antoine on 8/8/2020.
*/

#ifndef UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H
#define UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H

#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;

class Roster
{
public:
  Roster();
  Roster(int maxRosterSize);
  Student** classRosterArray;
  void parseAndAdd(string students_row);
  void add(string studentID, string students_firstName, string students_lastName, string students_email, int students_age, int students_courseDays, int students_courseDays1, int students_courseDays2, DegreeProgram stringDegreeProgram);
  bool remove(string studentID);
  void printAll();
  void printAverageDaysInCourse(string studentID);
  void printInvalidEmails();
  void printByDegreeProgram(DegreeProgram stringDegreeProgram);

  Student* GetInfo(int lastInput);

  int lastInput;
  int maxRosterSize;
  
  ~Roster();
};

#endif //UNIVERSITY_MIGRATE_PROGRAM_ROSTER_H
