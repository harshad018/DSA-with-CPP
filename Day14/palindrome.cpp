#include<iostream>
#include<cstring>


using namespace std;

bool isPalin(char word[], int n){
    int st = 0;  int end = n-1;

    while ( st <= end){
        if ( word[st] != word[end]){
            return false;
            break;
        }

        st++;
        end--;
    }

    return true;
}

int main(){

    char word[] = "apple";

    int n = strlen(word);


    cout<<isPalin(word,n)<<endl;




    return 0;
}
