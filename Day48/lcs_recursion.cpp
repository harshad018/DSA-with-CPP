#include<iostream>
#include<vector>
#include<algorithm> // for max()

using namespace std;

// Pass strings by reference, and use n and m as pointers/indices
int lcsRec(const string& str1, const string& str2, int n, int m){

    // Base Case
    if (n == 0 || m == 0){
        return 0;
    }

    // If last characters match
    if (str1[n-1] == str2[m-1]){
        return 1 + lcsRec(str1, str2, n-1, m-1);
    } 
    // If last characters don't match
    else {
        return max(lcsRec(str1, str2, n-1, m), lcsRec(str1, str2, n, m-1));
    }
}

int main(){

    string str1 = "abcdge";
    string str2 = "abedg";

    int n = str1.size();
    int m = str2.size();

    cout << lcsRec(str1, str2, n, m) << endl;

    return 0;
}
