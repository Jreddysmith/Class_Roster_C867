#ifndef CLASS_ROSTER_C867_SOFTWARESTUDENT_H
#define CLASS_ROSTER_C867_SOFTWARESTUDENT_H

#include "Student.h"
#include "Degree.h"
#include <string>

using namespace std;

class SoftwareStudent : public Student {

protected:
    Degree_plan degree = SOFTWARE;

public:


    using Student::Student;
    Degree_plan get_degree_plan() override;
};


#endif //CLASS_ROSTER_C867_SOFTWARESTUDENT_H
