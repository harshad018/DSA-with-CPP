#include<iostream>
#include<cmath>
using namespace std;

int main(){
   //take number
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    //required variable
    int last = 0;
    int arm = 0;
    int test = num;

    //loop to get the last digit
    while(test>0){

        last = test%10;

        arm += pow(last,3);

        test = test/10;


    }

    if( arm == num ){

        cout<<"Given number is armstrong"<<endl;
    }
    else{
        cout<<"Given number is not armstrong."<<endl;
    }
   

    return 0;
}