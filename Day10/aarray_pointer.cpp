#include<iostream>

using namespace std;



int main(){

    int x = 10;
    int *ptr = &x;

    int y  = 25;
    ptr = &y;

    cout<<*ptr<<endl;
    // the things that we did above is not possible with the array
    //once you first index is assigned as the address of the array 
    //then you can't change it later on.



    return 0;
}