#include<iostream>

using namespace std;

class Shape{

    public:
    virtual void draw() = 0; //pure virtual function.
};


class Circle : public Shape{
    public :
        void draw(){
            cout<<"Draw circle"<<endl;
        }
};

class Square : public Shape{
    public :
        void draw(){
            cout<<"Draw square"<<endl;
        }
};
int main(){

    Circle cir1;

    cir1.draw();

    Square squ1;

    squ1.draw();





    return 0;
}
