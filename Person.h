//
// Created by Azoz1 on 12-11-2018.
//

#ifndef P3_PCSS_MINI_PROJECT_PERSON_H
#define P3_PCSS_MINI_PROJECT_PERSON_H

#include <string>

using namespace std;

class Person {

private:
    string name;
    int age;
public:
    Person(string nm, int age);
    void setName(string newName);
    string getName();


};


#endif //P3_PCSS_MINI_PROJECT_PERSON_H
