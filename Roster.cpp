#include "Roster.h"
#include "Student.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include <regex>
#include <iostream>
#include <string>

using namespace std;

int printDaysInCourse(int arr[]) {
    int sum = 0;
    int avg;

    for (int i = 0; i < 3; ++i){
        sum += arr[i];
    }
    avg = sum / 3;

    return avg;
}

bool emailValidate (string email) {
    const regex pattern
            ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email, pattern);
}

void printInvalidEmails(vector<Student> &emails) {
    for(const auto &i : emails) {
        if(emailValidate(i.email)) {
            cout << i.email << "Valid Email";
        } else {
            cout << i.email << "Invalid Email";
        }
    }
}

void printByDegreeProgram(vector<Student> degrees, int degreeProgram) {
    for(auto &i: degrees) {
        if (i.degree == degreeProgram) {
            i.print();
        }
    }
}

void remove(string studentID) {

}

Roster::~Roster() = default;


int main() {
    cout << "====Class Roster====" << endl;
    cout << "====SCRIPTING AND PROGRAMMING APPLICATIONS — C867====" << endl;
    cout << "====C++" << "Student ID: #000936781" << " Name: Jarred Smith====" << endl;


    SoftwareStudent jarred;
    NetworkStudent jessica;
    SecurityStudent sam;
    jessica.set_first_name("Jessica");
    jarred.set_first_name("Jarred");
    sam.set_first_name("Sam");

    jarred.print();
    jessica.print();
    sam.print();

    Roster classRoster;

    return 0;
}
