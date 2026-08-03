#include<iostream>
#include<vector>
#include<algorithm> // for max()

using namespace std;

// Pass strings by reference, and use n and m as pointers/indices
int lcsTab(const string& str1, const string& str2, int n, int m, vector<vector<int>> dp){

    

    
    for ( int i = 1; i < n+1; i++){

        for ( int j = 1; j < m+1; j++){

            if ( str1[i-1] == str2[j-1]){

                dp[i][j] = 1 + dp[i-1][j-1];
            }else{

                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}

int main(){

    string str1 = "abcdge";
    string str2 = "abedg";

    int n = str1.size();
    int m = str2.size();

    vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

    cout << lcsTab(str1, str2, n, m, dp) << endl;

    return 0;
}
