#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "UniClasses.h"

/*
 * PrintClassSchedule.cpp
 *
 *  Created on: May 4, 2022
 *      Author: Bryce Lehnen
 */

void PrintClassSchedule(vector<UniClass> uniclasses, vector<string> classesWanted, int creditsAvailable) {

    // Declaration
    int credits = creditsAvailable;
    
    cout << "Is registered for: " << endl;
    // Search through all of uniclasses for each string in classesWanted
    for (string str : classesWanted) {
        for (UniClass temp : uniclasses) {
            // Checking if classes match
            if (temp.getClassNumber().compare(str) == 0) {
                // Checking available credits
                // CAN take class
                if (temp.getCredits() <= credits) {
                    // Printing out class info
                    cout << temp.getClassNumber() << " " << temp.getTitle() << " by " << temp.getProfessor() << " at " 
                         << temp.getDateTime() << " in " << temp.getLocation() << endl;

                    // Updating creditsAvailable
                    credits -= temp.getCredits();
                }
                // CAN'T take class
                else {
                    // Printing out that it could not register
                    cout << "Could not register for " << temp.getClassNumber() << endl;
                }
            }
        }
    }
}