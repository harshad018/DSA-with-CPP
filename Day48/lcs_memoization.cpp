#include<iostream>
#include<vector>
#include<algorithm> // for max()

using namespace std;

// Pass strings by reference, and use n and m as pointers/indices
int lcsMem(const string& str1, const string& str2, int n, int m, vector<vector<int>> dp){

    // Base Case
    if (n == 0 || m == 0){
        return 0;
    }

    if ( dp[n][m] != -1){
        return dp[n][m];
    }

    // If last characters match
    if (str1[n-1] == str2[m-1]){
        dp[n][m]=  1 + lcsMem(str1, str2, n-1, m-1,dp);
    } 
    // If last characters don't match
    else {
        dp[n][m] = max(lcsMem(str1, str2, n-1, m,dp), lcsMem(str1, str2, n, m-1,dp));
    }

    return dp[n][m];
}

int main(){

    string str1 = "abcdge";
    string str2 = "abedg";

    int n = str1.size();
    int m = str2.size();

    vector<vector<int>>dp(n+1, vector<int>(m+1, -1));

    cout << lcsMem(str1, str2, n, m, dp) << endl;

    return 0;
}
