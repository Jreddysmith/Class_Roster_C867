#include "Roster.h"
#include "Student.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"
#include "Degree.h"
#include <regex>
#include <iostream>
#include <string>

using namespace std;

void Roster::printDaysInCourse(string studentID) {
    for(int i = 0; i < student_count; i++) {
        if(classRosterArray[i]->get_student_id() == studentID) {
            cout << "Days in course: " << "{" << classRosterArray[i]->get_complete_num_days1() +
            classRosterArray[i]->get_complete_num_days2() + classRosterArray[i]->get_complete_num_days3() << "}" << endl;
        }
    }

}

bool emailValidate (string email) {
    const regex pattern
            ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email, pattern);
}

void Roster::printInvalidEmails() {
    cout << "Printing invalid emails in array.";
    for(int i = 0; i < student_count; i++) {
        if(emailValidate(classRosterArray[i]->get_email())) {
            cout << classRosterArray[i]->get_email() << "Valid Email";
        } else {
            cout << classRosterArray[i]->get_email() << "Invalid Email";
        }
    }
}

void Roster::printByDegreeProgram(int degreeProgram) {
    cout << "Printing Matching Degree Program" << endl;
    for(int i = 0; i < student_count; i++ ) {
        if (classRosterArray[i]->get_degree_plan() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::add(string student_ID, string first_name, string last_name, string email, int age, int set_complete_num_days1, int set_complete_num_days2, int set_complete_num_days3, Degree_plan degree) {
    cout << "Adding student to roster" << endl;
    int complete_num_days[] = {set_complete_num_days1, set_complete_num_days2, set_complete_num_days3};
    Student* student = nullptr;

    if(degree == SECURITY){
        student = new SecurityStudent(student_ID, first_name, last_name, email, age, complete_num_days, degree);
        cout << "Security student saved successful" << endl;
    }
    else if(degree == NETWORKING) {
        student = new NetworkStudent(student_ID, first_name, last_name, email, age, complete_num_days, degree);
        cout << "Networking student saved successful" << endl;
    }
    else if(degree == SOFTWARE) {
        student = new NetworkStudent(student_ID, first_name, last_name, email, age, complete_num_days, degree);
        cout << "Software student saved successful" << endl;
    } else {
        cout << "Did not save student" << endl;
    }

    for (int i = 0; i < student_count; i++) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = student;
            break;
        }
    }
}

void Roster::remove(string studentID) {
    cout << "Removing Student in array" << endl;
    for(int i = 0; i < student_count; i++) {
        if(classRosterArray[i]->get_student_id() == studentID) {
            classRosterArray[i] = nullptr;
            cout << "You have just removed student" << endl;
        } else {
            cout << "That StudentID does not exist" << endl;
        }
    }

}


void Roster::printAll() {
    cout << "Printing all Students in array" << endl;
    for(int i = 0; i < student_count; i++) {
        classRosterArray[i]->print();
    }
}

Roster::~Roster() = default;


int main() {
    cout << "====Class Roster====" << endl;
    cout << "====SCRIPTING AND PROGRAMMING APPLICATIONS — C867====" << endl;
    cout << "====C++" << "Student ID: #000936781" << " Name: Jarred Smith====" << endl;

    Roster classRoster;
    Degree_plan degree;


    classRoster.printAll();

    system("PAUSE");

    return 0;
}
