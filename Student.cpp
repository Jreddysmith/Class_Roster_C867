#include "Student.h"
#include "Degree.h"
#include <iostream>
#include <string>

Student::Student(string student_ID, string first_name, string last_name, string email, int age, Degree_plan degree) {
    this->student_ID = student_ID;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
    this->complete_num_days[3];

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

void Student::set_complete_num_days1(int complete_num_days) {
    this->complete_num_days[0] = complete_num_days;
}

int Student::get_complete_num_days1() {
    return complete_num_days[0];
}

void Student::set_complete_num_days2(int complete_num_days) {
    this->complete_num_days[1] = complete_num_days;
}

int Student::get_complete_num_days2() {
    return complete_num_days[1];
}

void Student::set_complete_num_days3(int complete_num_days) {
    this->complete_num_days[2] = complete_num_days;
}

int Student::get_complete_num_days3() {
    return complete_num_days[2];
}

void Student::set_degree_plan(Degree_plan degree) {
    this->degree = degree;
}

Degree_plan Student::get_degree_plan() {
    return degree;
}

void Student::print() {
    cout << this->student_ID <<"\t" << this->first_name <<"\t"<< this->last_name << "\t" <<  this->email << "\t"<< this->complete_num_days << "\t" << endl;
}



