#include<iostream>

using namespace std;

int naturalSum(int n){
    if ( n == 0){
        return 0 ;
    }else{
        return n + naturalSum(n-1);
    }
}


int main(){

    int sum = naturalSum(5);


    cout<<"Sum is: "<<sum<<endl;





    return 0;
}
