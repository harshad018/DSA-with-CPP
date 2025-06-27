#include<iostream>

using namespace std;

void oddOrEven( int num){
    if ( !(num & 1)){
        cout<<"Even"<<endl;

    }else{
        cout<<"Odd"<<endl;
    }
}

int main(){



    oddOrEven(4);
    oddOrEven(5);



    return 0;
}
