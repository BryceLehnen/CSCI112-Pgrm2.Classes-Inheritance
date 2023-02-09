#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Student.h"
#include "Employee.h"
#include "UniClasses.h"
#include "ReadFiles.cpp"
#include "FindStudentEmployee.cpp"
#include "PrintClassSchedule.cpp"
// Not sure why but I get errors if I include this here
// even though I use a method from it in this file
//#include "Tokenizer.cpp"  


/*
 * Driver.cpp
 *
 *  Created on: May 4, 2022
 *      Author: Bryce Lehnen
 */

int main() {

    // Declaration of vectors holding classes
    // that will contain file input data
    vector<Student> students;
    vector<Employee> employees;
    vector<UniClass> uniclasses;

    // Reading in input data, and sending it to the vectors
    students = readStudents();
    employees = readEmployees();
    uniclasses = readClasses();

    string first;
    string last;
    string line;
    vector<string> classesWanted;
    // Prompting user for name and classes they want to register for
    cout << "Enter first name: " << endl;
    getline(cin, first);

    cout << "Enter last name: " << endl;
    getline(cin, last);

    cout << "Enter classes to take: " << endl;
    getline(cin, line);
    // Splitting classes with a space inbetween each
    classesWanted = tokenizer(line, " ");

    // Spacing
    cout << endl;

    int creditsAvailable = 0;
    // Finding student/employee and getting the creditsAvailable
    creditsAvailable = FindStudentEmployee(students, employees, first, last);

    // Checking availability of classes the user wishes to take
    PrintClassSchedule(uniclasses, classesWanted, creditsAvailable);

    // Spacing
    cout << endl;

    return 0;
}