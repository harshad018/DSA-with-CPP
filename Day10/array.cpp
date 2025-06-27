#include<iostream>
using namespace std;


int main(){

    // initialize an array
    int marks[50];
    string subjects[] = {"hindi", "marathi", "english"};
    cout<<subjects[0]<<endl;

    //print the size fo the array
    cout<<sizeof(subjects)/sizeof(string)<<endl;

    //take input in the array



    for ( int i = 0; i < 5; i++){
        cin>>marks[i];
    }

    //output the array
    for (int i= 0; i < 3;i++){
        cout<<marks[i]<<endl;
    }


    int i = 0;
    while( i < 3){

        cout<<marks[i]<<endl;
        i++;
    }


    return 0;
}
