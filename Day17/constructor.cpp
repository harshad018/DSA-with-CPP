#include<iostream>

using namespace std;

class Car{

    string name;
    string color;


    public:

    Car(){
        cout<<"Constructor without parameters."<<endl;
    }

    Car(string name, string color){

        cout<< "Constructor with paramaters." <<endl;
        this -> name = name;
        this -> color = color;
    }
    void start(){
        cout<< "Car has started" <<endl;
    }

    void stop(){
        cout<<"Car has stopped." <<endl;
    }

    //getter

    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }


};

int main(){

    Car c1("Maruti 800", "White");
    Car c2;
    cout<<c1.getName()<<endl;
    cout<<c1.getColor()<<endl;







    return 0;
}
