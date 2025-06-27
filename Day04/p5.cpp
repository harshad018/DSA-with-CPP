#include<iostream>

using namespace std;

int main(){
    int a,b;
    char ch;
   cout<<"Enter the expression: ";
   cin>>a;
   cin>>ch;
   cin>>b;

   switch(ch){

    case '+':cout<<"Addition is: "<<a+b<<endl;
            break;
    case '-':cout<<"Subtraction is: "<<a-b<<endl;
            break;

    case '*':cout<<"Multiplication is: "<<a*b<<endl;
            break;

    case '/':cout<<"Division is: "<<a/b<<endl;
            break;


   }
    return 0;
}