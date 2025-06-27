#include<iostream>
#include<cstring>

using namespace std;

void countVowels(string str, int n){
    string vowels = "aeiou";

    int count = 0;

    for ( char ch : str){

        if ( vowels.find(ch) < n){

            cout<<ch<<endl;
            count++;
        }
    }

    cout<<"Number of vowels: "<<count<<endl;
}

int main(){


    string userInput;
    getline(cin,userInput);

    int n = userInput.length();

    countVowels(userInput,n);



    return 0;
}
