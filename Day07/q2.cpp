#include<iostream>

using namespace std;

int num;

void sum(){
    int sum = 0;
    while( num != 0){

        sum += num%10;

        num = num/10;
    }

    cout<<"Sum is: "<<sum<<endl;


}
int main(){

    cout<<"Enter the number: ";
    cin>>num;

    sum();

    return 0;
}