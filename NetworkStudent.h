#ifndef CLASS_ROSTER_C867_NETWORKSTUDENT_H
#define CLASS_ROSTER_C867_NETWORKSTUDENT_H

#include "Student.h"
#include "Degree.h"

class NetworkStudent : public Student {

protected:
    Degree_plan degree = NETWORKING;

public:


    using Student::Student;
    Degree_plan get_degree_plan() override;
};


#endif //CLASS_ROSTER_C867_NETWORKSTUDENT_H
