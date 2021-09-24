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

        cout<<"Enter name of person #"<<a+1;
        cin>>name;
        cout<<"Enter age of person #"<<a+1;
        cin>>age;
        luck=rand()%100+1;
        cout<<endl<<luck;
        if(luck>maxluck){
            luckiest=a;
            maxluck=luck;
        }
        People[a].setName(name);
        People[a].setAge(age);
        People[a].setLuck(luck);

    }

    cout<<"luckiest perosn is:"<<endl<<People[luckiest].getName()<<"  age of"<<People[luckiest].getAge();
    cout<<"  with luck of "<<People[luckiest].getLuck()<<endl;
    for(int a=0;a<5;a++){
        if(a!=luckiest){
            cout<<People[a].getName()<<" "<<People[a].getAge()<<" "<<People[a].getLuck();
            cout<<endl;
        }
    }
        cout<<"do you want to swap the luck?  Choose:"<<endl<<"1.Yes"<<endl<<"2.No";
        int sw1;
        int sw2;
        cin>>sw1;
        if(sw1==1){
            cout<<"enter numbers of persons ";
            cin>>sw1;
            cin>>sw2;
            int a =People[sw1-1].getLuck();
            int b=People[sw2-1].getLuck();
            People[sw1-1].setLuck(b);
            People[sw2-1].setLuck(a);
            for(int b=0;b<5;b++){

                    cout<<People[b].getName()<<" "<<People[b].getAge()<<" "<<People[b].getLuck();
                    cout<<endl;
            }

        }


}
