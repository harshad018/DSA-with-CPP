#include<iostream>

using namespace std;

char a;
//function here
char alphabet( char a){


    int no = (int)(a);
    int b;
    if ( no >= 122){
        b = 97;
    }else{
        b = no + 1;
    }
    

    int output = (char)(b);

    return output;
}

int main(){

    cout<<"Enter the character here: ";
    cin>>a;

    cout<<alphabet(a)<<endl;



    return 0;
}