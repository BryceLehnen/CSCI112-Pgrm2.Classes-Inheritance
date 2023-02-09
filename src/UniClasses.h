#include <string>
#include <vector>
using namespace std;

/*
 * UnivClasses.h
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

#ifndef SRC_UnivClasses_H_
#define SRC_UnivClasses_H_

class UniClass {

private:
    string classNumber;
    string title;
    int seatsTotal;
    int seatsLeft;
    string professor;
    string dateTime;
    string location;
    int credits;

public:
    // Constructor
    UniClass(vector<string> input);

    // Getter methods
    string getClassNumber() {
        return classNumber;
    }
    string getTitle() {
        return title;
    }
    int getSeatsTotal() {
        return seatsTotal;
    }
    int getSeatsLeft() {
        return seatsLeft;
    }
    string getProfessor() {
        return professor;
    }
    string getDateTime() {
        return dateTime;
    }
    string getLocation() {
        return location;
    }
    int getCredits() {
        return credits;
    }

};

#endif /* SRC_UnivClasses_H_ */
