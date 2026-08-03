#include<iostream>
#include<vector>


using namespace std;


int knapsackRec(vector<int> val, vector<int> wt, int capacity, int n){


    if ( n == 0 || capacity == 0){

        return 0;
    }
    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if ( itemWt <= capacity){


        //include 

        int ans1 = knapsackRec(val, wt, capacity - itemWt, n-1) + itemVal;
        
        


        //exclude

        int ans2 = knapsackRec(val, wt , capacity, n-1);


        return max(ans1, ans2);
    }else{


        //exclude


        return knapsackRec(val, wt, capacity, n-1);
    }

     
}

int knapsackMem(vector<int> val, vector<int> wt, int capacity, int n, vector<vector<int>> &dp){


    if ( n == 0 || capacity == 0){

        return 0;
    }

    if ( dp[n][capacity] != -1){
        return dp[n][capacity];
    }
    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if ( itemWt <= capacity){


        //include 

        int ans1 = knapsackMem(val, wt, capacity - itemWt, n-1, dp) + itemVal;
        
        


        //exclude

        int ans2 = knapsackMem(val, wt , capacity, n-1, dp);


        dp[n][capacity] =   max(ans1, ans2);
    }else{


        //exclude


        dp[n][capacity] =  knapsackMem(val, wt, capacity, n-1, dp);
    }

     return dp[n][capacity] ;
}

void knapsackTab(vector<int> val, vector<int> wt, int capacity, int n){

    vector<vector<int>> dp(n+1, vector<int>(capacity + 1, 0));

    for ( int i = 1 ; i < n + 1; i++){

        for ( int j = 1; j < capacity + 1; j++){

            int itemWt = wt[i-1];  //-1 due to indexing in the weight array
            int itemVal = val[i-1];

            if ( itemWt <= j){

                dp[i][j] = max( itemVal + dp[i-1][j-itemWt] ,dp[i-1][j]);
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
    cout<<knapsackMem(val,wt,capacity, n, dp)<<endl;
    cout<<knapsackRec(val, wt, capacity, n)<<endl;

    knapsackTab(val,wt,capacity,n);
    return 0;
}