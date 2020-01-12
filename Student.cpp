#include "Student.h"

#include <iostream>
#include <string>


Student::Student(string student_ID, string first_name, string last_name, string email, int age, string complete_num_days, string degree_types) {
    this->student_ID = student_ID;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
    this->complete_num_days = complete_num_days;
    this->degree_types = degree_types;
}

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

void Student::set_complete_num_days(string complete_num_days) {
    this->complete_num_days = complete_num_days;
}

string Student::get_complete_num_days() {
    return complete_num_days;
}

void Student::set_degree_types(string degree_types){
    this->degree_types = degree_types;
}

string Student::get_degree_types() {
    return degree_types;
}

void Student::get_degree_plan() {

}

void Student::print() {
    cout << "student info here" << endl;
}


Student::Student(){
    this->student_ID;
    this->first_name;
    this->last_name;
    this->email;
    this->age;
    this->complete_num_days;
    this->degree_types;
};

Student::~Student() = default;

