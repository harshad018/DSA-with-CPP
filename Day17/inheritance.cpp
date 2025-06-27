#include<iostream>

using namespace std;

class Animal {
    public:
    string color;
    void eat(){
        cout<<"Eats"<<endl;
    }

    void breate(){
        cout<<"Breaths"<<endl;
    }
};


class Fish : public Animal{
    public:
    int fins;


    void swim(){
        cout<<"Swims"<<endl;
    }
}
int main(){










    return 0;
}
