#include<iostream>

using namespace std;

int a,b,c;

int largest(int a, int b, int c){

    if ( a > b && a > c){
        return a;
    }
    else if ( b > a && b > c){
        return b;
    }

    else if( c > a && c > b){
        return c;
    }
    return 0;
}

int main(){

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<"Enter the value of c: ";
    cin>>c;


    cout<<largest(a,b,c)<<endl;
    return 0;
}