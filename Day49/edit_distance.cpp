#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int editDistance(string str1, string str2){

    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp ( n + 1, vector<int> ( m+ 1, 0));

    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int j = 0; j <= m; j++) dp[0][j] = j;


    for ( int i = 1; i < n + 1; i++){

        for ( int j = 1; j < m + 1; j++){


            if ( str1[i - 1] == str2[j-1]){

                dp[i][j] = 0 + dp[i-1][j-1];
            }else{

                dp[i][j] = 1 + min( dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));
            }
        }

        
    }

    return dp[n][m];

}

int main(){


    string str1 = "horse";
    string str2 = "ros";

    cout<<editDistance(str1, str2);




    return 0;
}