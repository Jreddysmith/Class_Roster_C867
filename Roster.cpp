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
            const int *classes = classRosterArray[i]->get_complete_num_days();
            int average = (classes[0] + classes[1] + classes[2]) / 3;
            cout << "Average days in course: " << average << endl;
        }
    }

}


bool emailValidate (string email) {
    const regex pattern
            ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email, pattern);
}

void Roster::printInvalidEmails() {
    cout << "Printing invalid emails in array." << endl;
    for(int i = 0; i < student_count; i++) {
        if(emailValidate(classRosterArray[i]->get_email())) {
            cout << classRosterArray[i]->get_email() << " Valid Email\n" << endl;
        } else {
            cout << classRosterArray[i]->get_email() << " Invalid Email\n" << endl;
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
    int complete_num_days[3] = {set_complete_num_days1, set_complete_num_days2, set_complete_num_days3};
    Student* student = nullptr;
   
    if(degree == SECURITY){
        student = new SecurityStudent(student_ID, first_name, last_name, email, age, complete_num_days, degree);
        cout << "Security student saved successful\n" << endl;
    }
    else if(degree == NETWORK) {
        student = new NetworkStudent(student_ID, first_name, last_name, email, age, complete_num_days, degree);
        cout << "Networking student saved successful\n" << endl;
    }
    else if(degree == SOFTWARE) {
        student = new SoftwareStudent(student_ID, first_name, last_name, email, age, complete_num_days, degree);
        cout << "Software student saved successful\n" << endl;
    } else {
        cout << "Did not save student\n" << endl;
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
    bool removed = false;
    for(int i = 0; i < student_count; i++) {
        if (classRosterArray[i] != NULL) {
            if (classRosterArray[i]->get_student_id() == studentID) {
                classRosterArray[i] = nullptr;
                removed = true;
                cout << "You have just removed student\n" << endl;
                return;
            }
        }
    }
    if (!removed) {
        cout << "That StudentID does not exist\n" << endl;
    }

}


void Roster::printAll() {
    cout << "Printing all Students in array" << endl;
    for(int i = 0; i < student_count; i++) {
        /* If statement for nullptr making program crash*/
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }        
    }
}


Roster::~Roster() = default;


int main() {
    Roster classRoster;
    Degree_plan degree;
    
    classRoster.add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2","Suzan","Erickson" ,"Erickson_1990@gmailcom", 19,50,30,40, NETWORK);
    classRoster.add("A3","Jack","Napoli","The_lawyer99yahoo.com" ,19,20,40,33,SOFTWARE);
    classRoster.add("A4","Erin","Black","Erin.black@comcast.net",22,50,58,40,SECURITY);
    classRoster.add("A5","Jarred","Smith","jsm1481@wgu.edu",33,10,20,30,SOFTWARE);


    cout << "====Class Roster====" << endl;
    cout << "====SCRIPTING AND PROGRAMMING APPLICATIONS — C867====" << endl;
    cout << "====C++" << "Student ID: #000936781" << " Name: Jarred Smith====" << endl;
    cout << "=== Student Data Table ===" << endl;
    cout << "=== Student ID==First Name==Last Name==Email==Age==Days in Course==Degree ===" << endl;
    classRoster.printAll();

    cout << "=============================================================================\n";

    classRoster.printInvalidEmails();
    classRoster.printDaysInCourse("A2");
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.remove("A3");


    classRoster.~Roster();
    system("PAUSE");

    return 0;
}
