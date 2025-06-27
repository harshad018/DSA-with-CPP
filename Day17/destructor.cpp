#include<iostream>

using namespace std;

class Car{


    public:
    string name;
    string color;
    int *mileage;




    Car(string name, string color){
        this -> name = name;
        this -> color = color;

        mileage = new int;

        *mileage = 10;


    }


    ~Car(){

        cout<<"Deleting object..."<<endl;
        if ( mileage!= NULL){
            delete mileage;

            mileage = NULL;
        }
    }
};

int main(){

    Car c1("Maruti 800", "White");











    return 0;
}
