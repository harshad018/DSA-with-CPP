#include<iostream>

using namespace std;

int  fibonnaci(int n){
    if (n == 1){
        return 1;
    }else if ( n== 0){
        return 0;
    }else{
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

int main(){

    int ans = fibonnaci(5);

    cout<<"Number is: "<<ans<<endl;





    return 0;
}
