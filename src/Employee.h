#include <string>
#include <vector>
using namespace std;
#include "Person.h"

/*
 * Employee.h
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

#ifndef SRC_Employee_H_
#define SRC_Employee_H_

class Employee : public Person {
    
private:
    string employeeType;
    string department;

public:
    // Constructor
    Employee(vector<string> input);

    // Getter methods
    string getEmployeeType() {
        return employeeType;
    }
    string getDepartment() {
        return department;
    }

};

#endif /* SRC_Employee_H_ */
