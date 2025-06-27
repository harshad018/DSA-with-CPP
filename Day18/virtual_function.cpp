#include<iostream>

using namespace std;

class Parent{

    public:
    void show(){
        cout<<"Parent class show"<<endl;
    }

    virtual void hello(){
        cout<<"Hello from the parent class"<<endl;
    }
};


class Child : public Parent{
    public:
    void show(){
        cout<<"Child class show"<<endl;
    }

    void hello(){
        cout<<"Hello from child"<<endl;
    }



};

int main(){


  Child child;

  Parent *ptr;


  ptr = &child;


  ptr -> hello();




    return 0;
}
