#include<iostream>
#include<cmath>
using namespace std;

int a,b;

int result(int a, int b){

    int output = pow(a,2) + pow(b,2) + (2*a*b);


    return output;




}
int main(){
    cout<<"Enter the number a: ";
    cin>>a;

    cout<<"Enter then number b: ";
    cin>>b;


    cout<<result(a,b)<<endl;
    return 0;
}