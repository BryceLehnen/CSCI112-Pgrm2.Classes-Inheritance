#include <string>
using namespace std;

/*
 * Person.h
 *
 *  Created on: May 5, 2022
 *      Author: Bryce Lehnen
 */

#ifndef SRC_Person_H_
#define SRC_Person_H_

class Person {

protected:
    string firstname;
    string lastname;
    string id;
    int creditsAvailable;
    
public:
    // Getter methods
    string getFirst() {
        return firstname;
    }
    string getLast() {
        return lastname;
    }
    string getID() {
        return id;
    }
    int getCreditsAvailable() {
        return creditsAvailable;
    }

};

#endif /* SRC_Person_H_ */
