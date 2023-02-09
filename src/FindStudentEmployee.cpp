#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Student.h"
#include "Employee.h"

/*
 * FindStudentEmployee.cpp
 *
 *  Created on: May 4, 2022
 *      Author: Bryce Lehnen
 */

int FindStudentEmployee(vector<Student> students, vector<Employee> employees, string first, string last) {

    // Declaration
    int creditsAvailable = 0;

    // Searching all students
    for (Student stu : students) {
        if (stu.getFirst().compare(first) == 0 && stu.getLast().compare(last) == 0) {
            // Printing student info
            cout << "Student name: " << stu.getFirst() << " " << stu.getLast() << " ID: " << stu.getID() 
                 << " Current credits: " << stu.getCurrentCredits() << endl;
            // Return credits available
            creditsAvailable = stu.getCreditsAvailable();
            return creditsAvailable;
        }
    }

    // Searching all employees
    for (Employee emp : employees) {
        if (emp.getFirst().compare(first) == 0 && emp.getLast().compare(last) == 0) {
            // Printing employee info
            cout << "Employee name: " << emp.getFirst() << " " << emp.getLast() << " ID: " << emp.getID() << " Type: " 
                 << emp.getEmployeeType() << " Department: " << emp.getDepartment() << endl;
            // Return credits available
            creditsAvailable = emp.getCreditsAvailable();
            return creditsAvailable;
        }
    }

    // Default will return 0 i.e. person not found
    return creditsAvailable;
}