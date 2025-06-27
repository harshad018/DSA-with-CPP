#include<iostream>

using namespace std;

int main(){
   //take number of fibonacci series;
   int n;
   cout<<"Enter number of fibonnacci series numbers: ";
   cin>>n;

    int j = 0;
    int k = 1;
   //then compare the number of iteration with the actual numbers.

   for ( int i = 0; i< n; i++){
       

        int number = j+k;
        cout<<number<<",";
        j = k;
        k = number;


   }
   return 0;
}