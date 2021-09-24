//
// Created by ACER on 24.09.2021.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#endif //UNTITLED_PERSON_H

#define UNTITLED_PERSON_H
#include <string>

using namespace std;
class Person {
private:
    int age,luck;
    string name;
public:
    Person();
    Person(string name, int age, int luck);
    void setName(string name);
    void setAge(int age);
    void setLuck(int luck);
    string getName();
    int getAge();
    int getLuck();

};
