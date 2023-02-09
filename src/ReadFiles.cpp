#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include "Student.h"
#include "Employee.h"
#include "UniClasses.h"
#include "Student.cpp"
#include "Employee.cpp"
#include "UniClasses.cpp"
#include "Tokenizer.cpp"

/*
 * ReadFiles.cpp
 *
 *  Created on: May 4, 2022
 *      Author: Bryce Lehnen
 */

// Reading from the students.csv file and
// returning all data
vector<Student> readStudents() {

    // Declaration
    vector<Student> students;
    ifstream fin("M:/Files/Programs/C++/CSCI 112/CSCI 112 - Pgrm2.Classes&Inheritance/students.csv");

    // Reading in each line
    string line;
    while (getline (fin, line)) {
        // Taking line and parsing at ","
        vector<string> parseLine;
        parseLine = tokenizer(line, ",");

        // Constructing a temp of class Student
        // to be put into students
        Student tempStu(parseLine);

        // Pushing temp onto vector of students
        students.push_back(tempStu);
    }

    return students;
}

// Reading from the employees.csv file and
// returning all data
vector<Employee> readEmployees() {

    // Declaration
    vector<Employee> employees;
    ifstream fin("M:/Files/Programs/C++/CSCI 112/CSCI 112 - Pgrm2.Classes&Inheritance/employees.csv");

    // Reading in each line
    string line;
    while (getline (fin, line)) {
        // Taking line and parsing at ","
        vector<string> parseLine;
        parseLine = tokenizer(line, ",");

        // Constructing a temp of class Employee
        // to be put into Employees
        Employee tempEmp(parseLine);

        // Pushing temp onto vector of Employees
        employees.push_back(tempEmp);
    }

    return employees;
}

// Reading from the classes.csv file and
// returning all data
vector<UniClass> readClasses() {

    // Declaration
    vector<UniClass> uniclasses;
    ifstream fin("M:/Files/Programs/C++/CSCI 112/CSCI 112 - Pgrm2.Classes&Inheritance/classes.csv");

    // Reading in each line
    string line;
    while (getline (fin, line)) {
        // Taking line and parsing at ","
        vector<string> parseLine;
        parseLine = tokenizer(line, ",");

        // Constructing a temp of class UniClass
        // to be put into UniClasses
        UniClass tempUni(parseLine);

        // Pushing temp onto vector of UniClasses
        uniclasses.push_back(tempUni);
    }

    return uniclasses;
}
