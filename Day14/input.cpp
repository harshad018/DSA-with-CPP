#include<iostream>
#include <cstring>
using namespace std;



int main(){


    char sentence[30];
    cin.getline(sentence,30);

    cout<<"Your sentence was: "<<sentence<<endl;
    cout<<"Length: "<<strlen(sentence)<<endl;




    return 0;
}
