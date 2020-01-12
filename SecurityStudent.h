#ifndef CLASS_ROSTER_C867_SECURITYSTUDENT_H
#define CLASS_ROSTER_C867_SECURITYSTUDENT_H

#include "Student.h"


class SecurityStudent : public Student{

public:
    void print();
    void get_degree_plan() override;

};


#endif //CLASS_ROSTER_C867_SECURITYSTUDENT_H
