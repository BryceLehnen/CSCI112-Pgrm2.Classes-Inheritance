#include <string>
#include <vector>
using namespace std;
#include "Person.h"
#include "Student.h"

/*
 * Student.cpp
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

// Constructor
Student::Student(vector<string> input) {
    lastname = input[0];
    firstname = input[1];
    id = input[2];
    creditsAvailable = 21;
    currentCredits = stoi(input[3]);
}
