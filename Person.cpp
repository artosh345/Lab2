//
// Created by ACER on 24.09.2021.
//

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;




    Person::Person(){
        name=" ";
        age=0;
        luck=0;
    }
    Person::Person(string name, int age, int luck){
        this->name=name;
        this->age=age;
        this->luck=luck;
    }
    string Person::getName(){
        return name;
    }
    int Person::getAge(){
        return age;
    }
    int Person::getLuck(){
        return luck;
    }
    void Person::setName(string name){
        this->name=name;
    }
    void Person::setAge(int age){
        this->age=age;
    }
    void Person::setLuck(int luck){
        this->luck=luck;
    }

;
