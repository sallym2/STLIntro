#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <map>
#include <string>

class GradeRecord {
    int grade;
public:
    int getGrade();
    void setGrade(int score);
};


void printGrades(std::map<std::string,GradeRecord>&gradebook);

void addGrade(std::map<std::string,GradeRecord>&gradebook);


#endif