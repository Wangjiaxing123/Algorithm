//
// Created by Newterk on 2018/2/10.
//

#ifndef DEMO1_STUDENT_H
#define DEMO1_STUDENT_H

#include <iostream>

using namespace std;

struct Student{
    string name;
    int score;

    bool operator<(const Student &otherStudent){
        return score != otherStudent.score? score < otherStudent.score : name < otherStudent.name;
    }

    friend ostream& operator<<(ostream &os, const Student &student){
        os<< "Student: "<<student.name<<"  "<<student.score<<endl;
        return  os;
    }
};

#endif //DEMO1_STUDENT_H
