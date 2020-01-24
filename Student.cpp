#include "Student.h"
#include "Degree.h"
#include <iostream>
#include <string>

Student::Student(string student_ID, string first_name, string last_name, string email, int age, int complete_num_days[], Degree_plan degree) {
    this->student_ID = student_ID;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
    this->complete_num_days;

    for(int i = 0; i < 3; i++) {
        complete_num_days[i] = complete_num_days[i];
    }
}

Student::Student(){

};

Student::~Student() = default;

void Student::set_student_id(string student_ID){
    this->student_ID = student_ID;
}

string Student::get_student_id() {
    return student_ID;
}

void Student::set_first_name(string first_name) {
    this->first_name = first_name;
}

string Student::get_first_name(){
    return first_name;
}

void Student::set_last_name(string last_name) {
    this->last_name = last_name;
}

string Student::get_last_name() {
    return last_name;
}

void Student::set_email(string email) {
    this->email = email;
}

string Student::get_email(){
    return email;
}

void Student::set_age(int age){
    this->age = age;
}

int Student::get_age(){
    return age;
}

void Student::set_complete_num_days(int complete_num_days[]) {
    for (int i = 0; i < 3; i++) {
        this->complete_num_days[i] = complete_num_days[i];
    }
    
}

int* Student::get_complete_num_days() const {
    return complete_num_days;
}

void Student::set_degree_plan(Degree_plan degree) {
    this->degree = degree;
}

Degree_plan Student::get_degree_plan() {
    return degree;
}

void Student::print() {
    int* days = get_complete_num_days();

    string degreePlan;
    if(get_degree_plan() == SECURITY) {
        degreePlan = "SECURITY";
    }
    else if(get_degree_plan() == NETWORK) {
        degreePlan = "NETWORKING";
    }
    else if(get_degree_plan() == SOFTWARE) {
        degreePlan = "SOFTWARE";
    } else {
       degreePlan = "INCORRECT DEGREE PLAN";
    }

    cout <<"\t" << this->student_ID <<"\t" << this->first_name <<"\t"<< this->last_name <<
    "\t" << this->email << "\t"<< "{" /*<< days[0] << "\t" << days[1] <<
    "\t" << days[2] <<*/ "}" << "\t" << degreePlan << endl;
}



