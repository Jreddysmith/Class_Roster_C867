#include "Roster.h"
#include "Student.h"
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



int main() {

    SoftwareStudent jarred;
    jarred.set_complete_num_days1(3);
    jarred.set_complete_num_days2(43);
    jarred.set_complete_num_days3(4);
    cout << jarred.get_complete_num_days1() << endl;
    cout << jarred.get_complete_num_days2() << endl;
    cout << jarred.get_complete_num_days3() << endl;

    cout << jarred.get_degree_plan() << " Test" << endl;

    cout << printDaysInCourse(jarred.complete_num_days) << endl;


    cout << "Hello Friend! in Roster!" << endl;
    return 0;
}
