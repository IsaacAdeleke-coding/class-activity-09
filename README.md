# Class Activity 09: Job Eligibility Checker

This C++ program determines the eligibility of an applicant for a job based on their citizenship, education, experience, age, and criminal record. The program asks the user a series of questions and provides a result on whether they meet the eligibility criteria.

## Program Overview

1. The user is prompted to input the following details:
   - Citizenship status
   - Bachelor's degree status
   - Years of work experience
   - Age
   - Criminal record status
   - Work visa status (if applicable)
2. The program checks the eligibility based on the following conditions:
   - The applicant must be at least 18 years old.
   - They must either have a bachelor's degree or at least 2 years of experience.
   - The applicant should not have a criminal record.
   - If not a US citizen, the applicant must have a valid work visa.
3. Based on the input, the program determines whether the applicant is eligible for the job or not.

### Code Snippet

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string citizenship;
    string hasDegree;
    int experience;
    int age;
    string criminalRecord;
    string workVisa;

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

    if (citizenship == "no") {
        cout << "Do you have a valid work visa? (yes/no): ";
        cin >> workVisa;
    }

    bool isEligible = false;

    if (citizenship == "yes") {
        if (age >= 18 && (hasDegree == "yes" || experience >= 2) && criminalRecord == "no") {
            isEligible = true;
        }
    } else if (workVisa == "yes") {
        if (age >= 18 && (hasDegree == "yes" || experience >= 2) && criminalRecord == "no") {
            isEligible = true;
        }
    }

    if (isEligible) {
        cout << "\nYou are eligible for the job!" << endl;
    } else {
        cout << "\


Example Input/Output
Example:

Are you a US citizen? (yes/no): yes
Do you have a bachelor's degree? (yes/no): yes
How many years of experience do you have?: 4
How old are you?: 23
Do you have any criminal record? (yes/no): no

You are eligible for the job!
Eligibility Criteria

US Citizen:
Must be at least 18 years old.
Must have a bachelor's degree OR at least 2 years of work experience.
Must not have a criminal record.
Non-US Citizen with a Work Visa:
Must meet the same conditions as above and possess a valid work visa.
How to Compile and Run

To compile the program, use the following command
g++ main.cpp -o EligibilityChecker
To run the compiled program, use:
./EligibilityChecker
Features

Asks for user input regarding their job eligibility details.
Checks eligibility based on predefined criteria.
Provides a final message indicating whether the user is eligible for the job.
