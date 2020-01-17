#include "Roster.h"
#include "Student.h"
#include "SoftwareStudent.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

    Student jarred = Student("A1", "Jarred", "Smith", "jsm1481@wgu.edu", 32, "21");
    jarred.print();

//    SoftwareStudent me;
//    me.set_student_id("A2");
//
//    cout << jarred.get_student_id() << endl;
//    cout << me.get_student_id() << "This was my id" << endl;

    cout << "Hello Friend! in Roster!" << endl;
    return 0;
}
