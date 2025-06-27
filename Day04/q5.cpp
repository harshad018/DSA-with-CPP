#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num[3];
    cout<<"Enter the number: ";
    for(int i = 0; i < 3 ; i++){

        cin>>num[i];

    }
  

    bool isArmstrong = (pow(num[0],3)+ pow(num[1],3)+pow(num[2],3)) == (num[0]*100 + num[1]*10 + num[2])? true:false;

    if(isArmstrong){
        cout<<"Number is an Armstrong number."<<endl;
    }else{
        cout<<"Number is not an Armstrong number."<<endl;
    }
    return 0;
}