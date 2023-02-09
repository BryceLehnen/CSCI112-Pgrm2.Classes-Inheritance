#include <string>
#include <vector>
using namespace std;
#include "Person.h"
#include "Employee.h"

/*
 * Employee.cpp
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

// Constructor
Employee::Employee(vector<string> input) {
    lastname = input[0];
    firstname = input[1];
    id = input[2];
    employeeType = input[3];
    department = input[4];

    // Determining available credits
    if (employeeType.compare("FT") == 0) {
        creditsAvailable = 7;
    }
    else if (employeeType.compare("PT") == 0) {
        creditsAvailable = 3;
    }
}
