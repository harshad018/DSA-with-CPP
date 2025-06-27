#include<iostream>
#include<cstring>
#include<vector>


using namespace std;

void printSubset(string str, string subset){

    if ( str.size() == 0){
        cout<<subset<<endl;
        return;
    }

    char ch = str[0];

    //yes choice
    printSubset(str.substr(1, str.size() - 1), subset + ch);

    //no choice
    printSubset(str.substr(1, str.size() - 1), subset);
}

int main(){

    string  str = "abc";

    string subset = "";

    printSubset(str,  subset);



    return 0;
}
