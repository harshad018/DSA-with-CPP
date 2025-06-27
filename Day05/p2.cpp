#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int sum = 0;
    

    while(num>0){
        sum += num%10;

    

        num = num/10;
        
    }

    cout<<"The sum is: "<<sum<<endl;

    return 0;
}