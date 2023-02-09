#include <string>
#include <vector>
using namespace std;
#include "Person.h"
#include "UniClasses.h"

/*
 * UniClasses.cpp
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

// Constructor
UniClass::UniClass(vector<string> input) {
    classNumber = input[0];
    title = input[1];
    seatsTotal = stoi(input[3]);
    seatsLeft = stoi(input[4]);
    professor = input[6];
    dateTime = input[7];
    location = input[8];
    credits = stoi(input[9]);
}
