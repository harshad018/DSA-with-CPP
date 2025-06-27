#include<iostream>

using namespace std;

void printSum( int mat[][3], int n){
    int sum = 0;
    for ( int i = 0; i < n; i++){
        sum += mat[1][i];
    }

    cout<<"Sum of the second row is: "<<sum<<endl;
}

int main(){

    int nums[3][3] = { {1,4,9}, {11,4,3}, {2,2,3} };

    printSum( nums,3);



    return 0;
}
