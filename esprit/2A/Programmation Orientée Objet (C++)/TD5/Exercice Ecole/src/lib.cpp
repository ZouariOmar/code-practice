/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-20
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1615828_1?courseId=_4241_1&view=content TD5 @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Student::Student object
 *
 * @param _name stirng
 * @param _prename string
 * @param _address string
 * @param _birth_date string
 * @param _id int
 */
Student::Student(string _name, string _prename, string _stClass, string _address, string _birth_date, int _id)
    : name(_name), prename(_prename), stClass(_stClass), address(_address), birth_date(_birth_date), id(_id) {
}

/**
 * @brief ### Add a new student to the school object
 *
 * @param student {Student &}
 */
void School::addStudent(Student &student) {
  if (!students.count(student.id))
    students[student.id] = vector<string>({student.name, student.prename, student.stClass, student.address, student.birth_date});
}

/**
 * @brief ### Display all students
 */
void School::displayStudents() const {
  for (const pair<int, vector<string>> &student : students) {
    cout << "Student id..........." << student.first << endl;
    cout << "Student Name........." << student.second[0] << endl;
    cout << "Student Prename......" << student.second[1] << endl;
    cout << "Student Class........" << student.second[2] << endl;
    cout << "Student Address......" << student.second[3] << endl;
    cout << "Student Birth Date..." << student.second[4] << endl;
    cout << "---------------------" << endl;
  }
}

/**
 * @brief ### Display students depending on there classes
 *
 * @param className {string &}
 */
void School::displayStudents(const string &className) const {
  cout << className << " Student Class\n.\n.\n." << endl;
  for (const pair<int, vector<string>> &student : students) {
    if (student.second[2] != className)
      continue;
    cout << "Student id..........." << student.first << endl;
    cout << "Student Name........." << student.second[0] << endl;
    cout << "Student Prename......" << student.second[1] << endl;
    cout << "Student Address......" << student.second[3] << endl;
    cout << "Student Birth Date..." << student.second[4] << endl;
    cout << "---------------------" << endl;
  }
}

/**
 * @brief ### Return `true` if the student exist, overwise return `false`
 *
 * @param id {int &}
 * @return bool
 */
bool School::findStudent(const int &id) const {
  return students.find(id) != students.end();
}

void School::rmStudent(const int &id) {
  if (findStudent(id))
    students.erase(id);
}