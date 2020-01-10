#ifndef CLASS_ROSTER_C867_STUDENT_H
#define CLASS_ROSTER_C867_STUDENT_H

#include <string>

using namespace std;

class Student {

protected:
    int student_ID;
    string first_name;
    string last_name;
    string email;
    int age;
    int complete_num_days[10000] = {};
    string degree_types;

public:
    Student();
    Student(int student_ID, string first_name, string last_name, string email, int age, string degree_types);



    virtual ~Student();

    void set_student_id(int student_ID);
    int get_student_id();


};


#endif //CLASS_ROSTER_C867_STUDENT_H
