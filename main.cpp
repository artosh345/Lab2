#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Person.h"
#include <string>
using namespace std;
int main() {
    string name;
    int age;
    int luck;
    int maxluck;
    int luckiest;


    vector<Person> People(5);
    for(int a=0;a<5;a++){
        srand((0));
        cout<<"Enter name of person #"<<a+1;
        cin>>name;
        cout<<"Enter age of person #"<<a+1;
        cin>>age;
        luck=rand()%100;
        if(luck>maxluck){
            luckiest=a;
            maxluck=luck;
        }
        People[a].setName(name);
        People[a].setAge(age);
        People[a].setLuck(luck);
    }
    cout<<"luckiest perosn is:"<<endl<<People[luckiest].getName()<<"  age of"<<People[luckiest].getAge();
    cout<<"  with luck of "<<People[luckiest].getLuck();

}
