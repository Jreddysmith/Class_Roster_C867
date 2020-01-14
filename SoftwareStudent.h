#ifndef CLASS_ROSTER_C867_SOFTWARESTUDENT_H
#define CLASS_ROSTER_C867_SOFTWARESTUDENT_H

#include "Student.h"

class SoftwareStudent : public Student {

public:
    void print() override ;
    void get_degree_plan() override;
};


#endif //CLASS_ROSTER_C867_SOFTWARESTUDENT_H
