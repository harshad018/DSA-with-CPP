#include<iostream>
#include<cstring>
using namespace std;

void convertUpper(char word[], int n){

    for ( int i = 0; i < n; i++){

        if ( word[i] >= 'A' && word[i] <= 'Z' ){
            continue;
        }else{
            word[i] = word[i] - 'a' + 'A';
        }

    }

    cout<< word <<endl;

}

int main(){

    char word[] = "ApPle";

    convertUpper(word,5);



    return 0;
}
