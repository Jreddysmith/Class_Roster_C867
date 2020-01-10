#ifndef CLASS_ROSTER_C867_STUDENT_H
#define CLASS_ROSTER_C867_STUDENT_H

#include <string>

using namespace std;

class Student {

protected:
    string student_ID;
    string first_name;
    string last_name;
    string email;
    int age;
    string complete_num_days;
    string degree_types;

public:
    Student();
    Student(string student_ID, string first_name, string last_name, string email, int age, string complete_num_days, string degree_types);



    virtual ~Student();

    void set_student_id(string student_ID);
    string get_student_id();

    void set_first_name(string first_name);
    string get_first_name();

    void set_last_name(string last_name);
    string get_last_name();


};


#endif //CLASS_ROSTER_C867_STUDENT_H
