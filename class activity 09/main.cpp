//
//  main.cpp
//  class activity 09
//
//  Created by Isaac Adeleke on 9/15/24.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables to store applicant's details
    string citizenship;
    string hasDegree;
    int experience;
    int age;
    string criminalRecord;
    string workVisa;

    // Asking the user for details
    cout << "Are you a US citizen? (yes/no): ";
    cin >> citizenship;

    cout << "Do you have a bachelor's degree? (yes/no): ";
    cin >> hasDegree;

    cout << "How many years of experience do you have?: ";
    cin >> experience;

    cout << "How old are you?: ";
    cin >> age;

    cout << "Do you have any criminal record? (yes/no): ";
    cin >> criminalRecord;

    // If not a US citizen, ask for a work visa status
    if (citizenship == "no") {
        cout << "Do you have a valid work visa? (yes/no): ";
        cin >> workVisa;
    }

    // Check eligibility
    bool isEligible = false;

    // Criteria for US citizens
    if (citizenship == "yes") {
        if (age >= 18 && (hasDegree == "yes" || experience >= 2) && criminalRecord == "no") {
            isEligible = true;
        }
    }
    // Criteria for non-citizens with a work visa
    else if (workVisa == "yes") {
        if (age >= 18 && (hasDegree == "yes" || experience >= 2) && criminalRecord == "no") {
            isEligible = true;
        }
    }

    // Final output based on eligibility
    if (isEligible) {
        cout << "\nYou are eligible for the job!" << endl;
    } else {
        cout << "\nYou are not eligible for the job." << endl;
    }

    return 0;
}

/*
 Are you a US citizen? (yes/no): yes
 Do you have a bachelor's degree? (yes/no): yes
 How many years of experience do you have?: 4
 How old are you?: 23
 Do you have any criminal record? (yes/no): no

 You are eligible for the job!
 Program ended with exit code: 0
 */
