#include "Student.h"

Student::Student(string student_ID, string first_name, string last_name, string email, int age, string complete_num_days, string degree_types) {
    this->student_ID = student_ID;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
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




Student::~Student() = default;