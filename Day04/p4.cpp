#include<iostream>

using namespace std;

int main(){
    bool isAdult;

    int age;

    cout<<"Enter the age: ";
    cin>>age;

    isAdult = (age>=18)? true:false;

    //largest of two numbers
    int a = 10;
    int b = 5;

    int largest = (a>=b) ? a:b;

    cout<<"Largest number is: "<<largest<<endl;

    return 0;
}