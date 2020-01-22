#ifndef CLASS_ROSTER_C867_SECURITYSTUDENT_H
#define CLASS_ROSTER_C867_SECURITYSTUDENT_H

#include "Student.h"
#include "Degree.h"
#include <string>

using namespace std;


class SecurityStudent : public Student{

protected:
    Degree_plan degree = SECURITY;

public:


    using Student::Student;
    Degree_plan get_degree_plan() override;

};


#endif //CLASS_ROSTER_C867_SECURITYSTUDENT_H
