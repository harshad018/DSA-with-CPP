#include<iostream>

using namespace std;

void printNumbers(int n){

    if ( n >= 1){
        cout<<n<<", ";

        n--;

        printNumbers(n);
    }else{
        cout<<endl;
        return;
    }
}

int main(){

    printNumbers(100);





    return 0;
}
