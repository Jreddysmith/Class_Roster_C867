//
// Created by Jarred Smith on 1/9/20.
//

#ifndef CLASS_ROSTER_C867_ROSTER_H
#define CLASS_ROSTER_C867_ROSTER_H

#include<string>
#include "Degree.h"
#include "Student.h"

using namespace std;


const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
         "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
         "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
         "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
         "A5,Jarred,Smith,jsm1481@wgu.edu,33,10,20,30,SOFTWARE"
        };

const int student_count = sizeof(studentData) / sizeof(studentData[0]);


class Roster {


public:
    Student* classRosterArray[student_count] = {nullptr, nullptr, nullptr, nullptr, nullptr};

    void add(string student_ID, string first_name, string last_name,
            string email, int age, int set_complete_num_days1,
            int set_complete_num_days2, int set_complete_num_days3, Degree_plan degree);

    void printAll();
    void printByDegreeProgram(int degreeProgram);
    void printInvalidEmails();
    void remove(string studentID);
    void printDaysInCourse(string studentID);

~Roster();

};


#endif //CLASS_ROSTER_C867_ROSTER_H
