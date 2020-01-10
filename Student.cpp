#include "Student.h"

Student::Student(int student_ID, string first_name, string last_name, string email, int age, string degree_types) {
    this->student_ID = student_ID;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
    this->degree_types = degree_types;
}

void Student::set_student_id(int student_ID){
    this->student_ID = student_ID;
}



Student::~Student() = default;