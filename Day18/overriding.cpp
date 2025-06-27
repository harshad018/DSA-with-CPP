#include<iostream>

using namespace std;

class Parent{

    public:
    void show(){
        cout<<"Parent class show"<<endl;
    }
};


class Child : public Parent{
    public:
    void show(){
        cout<<"Child class show"<<endl;
    }
};

int main(){


    Child c1;

    c1.show();




    return 0;
}
