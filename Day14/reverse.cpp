#include<iostream>
#include<cstring>

using namespace std;

void reverseChar( char word[], int n){
    int i = 0;
    int j = n-1;


    while ( i <= j){
        swap(word[i], word[j]);

        i++;
        j--;
    }

    cout<<word<<endl;
}

int main(){


    char word[] = "Hello";

    int n = strlen(word);
    reverseChar(word,n);


    return 0;
}
