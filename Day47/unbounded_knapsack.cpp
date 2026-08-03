#include<iostream>
#include<vector>


using namespace std;



void knapsackTab(vector<int> val, vector<int> wt, int capacity, int n){

    vector<vector<int>> dp(n+1, vector<int>(capacity + 1, 0));

    for ( int i = 1 ; i < n + 1; i++){

        for ( int j = 1; j < capacity + 1; j++){

            int itemWt = wt[i-1];  //-1 due to indexing in the weight array
            int itemVal = val[i-1];

            if ( itemWt <= j){

                dp[i][j] = max( itemVal + dp[i][j-itemWt] ,dp[i-1][j]);
            }else{

                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout<<dp[n][capacity]<<endl;
}

int main(){

    vector<int> val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};


    int capacity = 7;

    int n = 5;


    vector<vector<int>> dp(n+1, vector<int>(capacity+ 1 , -1));  
    
    knapsackTab(val,wt,capacity,n);
    return 0;
}