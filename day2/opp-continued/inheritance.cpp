#include<iostream>
using namespace std;

class Fruit{
    public:
     string name;
     int price;
     void setData(int p,string n){
        name=n;
        price=p;
     }
     void getData(){
        cout<<"Fruit name: "<<name<<endl;
        cout<<"Price of the fruit:"<<price<<endl;
     }
};

//inheriting from Fruit class

class Apple: public Fruit {
    public:
        string color;  //additional data member for apple
};

int main(){
    Apple a1;         //creating
    a1.setData(250,"Apple1");
    a1.color ="red";
    a1.getData();
    cout<<"Apple1 color : "<<a1.color<<endl;
    return 0;
}