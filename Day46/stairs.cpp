#include<iostream>
#include<vector>

using namespace std;

int stairWays(int n){

    if ( n == 0 || n == 1){

        return 1;
    }

    return stairWays(n-1) + stairWays(n-2);
}

int stairWaysDP(int n, vector<int> &dp){

    if ( n == 0 || n == 1){

        return 1;
    }

    if ( dp[n] != -1){

        return dp[n];
    }

    dp[n] = stairWaysDP(n-1, dp) + stairWaysDP(n-2, dp);

    return dp[n];
}

int stairWaysTab(int n){

    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for ( int i = 2; i <= n ; i++){

        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){

    int n = 4;

    vector<int> dp(n+1, -1);
    cout<<stairWaysDP(n, dp)<<endl;
    cout<<stairWaysTab(n)<<endl;

    cout<<stairWays(n)<<endl;


    return 0;
}