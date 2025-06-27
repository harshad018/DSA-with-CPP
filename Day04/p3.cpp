#include<iostream>

using namespace std;

int main(){
    long long income;
    cout<<"Enter your income: ";
    cin>>income;
    

    if(income < 500000){
        cout<<"Tax: "<<(0*income)/100<<endl;
    }
    else if( income > 500000 && income < 1000000){
        cout<<"Tax: "<<(20*income)/100<<endl;
    }
    else if(income >= 1000000){
        cout<<"Tax: "<<(30*income)/100<<endl;
    }
    return 0;
}