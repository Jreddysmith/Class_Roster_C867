#ifndef CLASS_ROSTER_C867_STUDENT_H
#define CLASS_ROSTER_C867_STUDENT_H

#include <string>
#include "Degree.h"

using namespace std;

class Student {

protected:


public:
    string student_ID;
    string first_name;
    string last_name;
    string email;
    int age;
    int* complete_num_days;
    Degree_plan degree;


    Student();
    Student(string student_ID, string first_name, string last_name, string email, int age, int complete_num_days[], Degree_plan degree);
    ~Student();



    virtual void print();

    void set_student_id(string student_ID);
    string get_student_id();

    void set_first_name(string first_name);
    string get_first_name();

    void set_last_name(string last_name);
    string get_last_name();

    void set_email(string email);
    string get_email();

    void set_age(int age);
    int get_age();

    void set_complete_num_days1(int complete_num_days);
    int get_complete_num_days1();

    void set_complete_num_days2(int complete_num_days);
    int get_complete_num_days2();

    void set_complete_num_days3(int complete_num_days);
    int get_complete_num_days3();

    void set_degree_plan(Degree_plan degree);
    virtual Degree_plan get_degree_plan() = 0;

};


#endif //CLASS_ROSTER_C867_STUDENT_H
