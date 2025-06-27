
//PRINT SUM OF N NATURAL NUMBERS.
#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    int n;

    cout<<"Enter the number of natural numbers n: ";
    cin>>n;

    for (int i=1; i<=n;i++){
        sum += i;
    }

    cout<<"Total sum is: "<<sum<<endl;
    return 0;
}