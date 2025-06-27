#include<iostream>
using namespace std;

void changeB(int b){
    b = 20;

    cout<< b <<endl;
}

void changeC(int *ptr){

    *ptr = 20;
    cout<<*ptr<<endl;
}
int main(){

    int a = 10;


    int *ptr = &a;

    float pi = 3.14;

    float *ptr2 = &pi;


    //print the size of pointers

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;

    //print the pointer of pointer

    float **ptr3 = &ptr2;
    cout<<ptr3<<endl;

    //null pointer

    int *ptr4 = NULL;
    cout<<ptr4<<endl;

    // cout<<*ptr4<<endl; gives segmentation fault.

    cout<<ptr2<<endl;
    cout<<ptr<<endl;


    // passing arguments by value
    int b = 10;
    changeB(b);
    cout<<b<<endl;

    // passing arguments by reference.
    int c = 10;
    int *ptr5 = &c;
    changeC(ptr5);

    cout<<c<<endl;


    //reference variable
    int d = 50;
    int &e = d;

    cout<<d<<e<<endl;
    cout<<&a<<endl;

    return 0;
}
