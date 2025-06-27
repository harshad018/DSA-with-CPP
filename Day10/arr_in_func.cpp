#include<iostream>

using namespace std;

void func( int arr[]){


    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;



}

void func2( int *ptr){


    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;



}
int main(){

    int arr[] = {5,4,3,9,12};
    func(arr);
    func2(arr);//passing array name as parameter = passing a pointer.

    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];

    for ( int i = 0; i < n ; i++){

        if ( arr[i] > max){
            max = arr[i];
        }


    }

    cout<<"Max value is: "<<max<<endl;



    return 0;
}