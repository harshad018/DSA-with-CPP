#include<iostream>
#include<vector>


using namespace std;


int getMinDiff(vector<int> nums){

    int totalSum = 0;

    for ( int el : nums){

        totalSum += el;
    }

    int w = totalSum / 2;
    int n = nums.size();

    vector<vector<int>> dp( n + 1, vector<int> ( w+1, 0) );


    for ( int i = 1; i < n + 1; i ++){

        for ( int j = 1; j < w+ 1; j++){


            if ( nums[i-1] <= j){


                dp[i][j] = max( nums[i-1] + dp[i-1][j - nums[i-1]], dp[i-1][j]);
            }else{

                dp[i][j] = dp[i-1][j];
            }
        }
    }


    int grp1Sum = dp[n][w];

    int grp2Sum = totalSum - grp1Sum;

    return abs(grp1Sum - grp2Sum);


}


int main(){

    vector<int> nums = {1,6,11,5};

    cout << getMinDiff(nums) << endl;



    return 0;
}