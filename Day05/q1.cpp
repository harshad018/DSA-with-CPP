#include<iostream>

using namespace std;

int main(){
   //take number
   int num;
   cout<<"Enter the number: ";
   cin>>num;

   //add loop
   int fact = num;
   

   while(num>0){

    fact *= (num-1);

    num = num - 1;

    if (num == 1){
        break;
    }

   }

   cout<<"Factorial is: "<<fact<<endl;

   

    return 0;
}