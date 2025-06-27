#include<iostream>

using namespace std;

class Print{
    public:

    void show ( int x){
        cout<<"The value of x: "<<x<<endl;
    }

    void show(string str){
        cout<<"The value of string: "<<str<<endl;
    }
};

int main(){

    Print obj;

    obj.show(32);
    obj.show("Harshad");





    return 0;
}
