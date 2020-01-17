#ifndef CLASS_ROSTER_C867_STUDENT_H
#define CLASS_ROSTER_C867_STUDENT_H

#include <string>

using namespace std;

class Student {

protected:


public:
    string student_ID;
    string first_name;
    string last_name;
    string email;
    int age;
    string complete_num_days;
    string degree_types;

    Student();
    Student(string student_ID, string first_name, string last_name, string email, int age, string complete_num_days);



    virtual ~Student();
    void virtual print();
    virtual void get_degree_plan();

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

    void set_complete_num_days(string complete_num_days);
    string get_complete_num_days();

    void set_degree_types(string degree_types);
    string get_degree_types();


};


#endif //CLASS_ROSTER_C867_STUDENT_H
