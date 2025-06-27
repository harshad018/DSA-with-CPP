#include<iostream>
#include<cstring>
using namespace std;

bool canBeEqual(string s1, string s2){
    int flag = 0;
    for ( int i = 0; i < s1.length(); i++){
        if ( s1[i] == s2[i]){
            continue;
        }else{
            flag++;
        }
    }

    if (flag == 2){
        return true;
    }

    return false;
}


int main(){

    string s1 = "Harsha";
    string s2 = "Ashish";


    cout<<canBeEqual(s1,  s2)<<endl;





    return 0;
}
