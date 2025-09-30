/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-20
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1615828_1?courseId=_4241_1&view=content TD5 @endlink  
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Student {
public:
  string name, prename, stClass, address, birth_date;
  int id;
  Student(string, string, string, string, string, int);
}; // Student class

class School {
private:
  unordered_map<int, vector<string>> students;

public:
  void addStudent(Student &);
  void displayStudents() const;
  void displayStudents(const string &) const;
  bool findStudent(const int &) const;
  void rmStudent(const int &);
}; // School class

#endif // __INC_HPP__
