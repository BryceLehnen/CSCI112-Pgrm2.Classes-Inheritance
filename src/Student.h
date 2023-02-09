#include <string>
#include <vector>
using namespace std;
#include "Person.h"

/*
 * Student.h
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

#ifndef SRC_Student_H_
#define SRC_Student_H_

class Student : public Person {

private:
    int currentCredits;

public:
    // Constructor
    Student(vector<string> input);

    // Getter methods
    int getCurrentCredits() {
        return currentCredits;
    }

};

#endif /* SRC_Student_H_ */
