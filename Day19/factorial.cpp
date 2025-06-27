#include<iostream>

using namespace std;

int factorial ( int n){
    if ( n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){


    int ans = factorial(5);

    cout<<"Factorial is: "<<ans<<endl;




    return 0;
}
