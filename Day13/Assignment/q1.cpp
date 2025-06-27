#include<iostream>

using namespace std;

void printResult( int mat[][3], int n, int m){
    int occ = 0;

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if ( mat[i][j] == 7){
                occ++;
            }
        }
    }

    cout<<"Number of 7's: "<<occ<<endl;
}

int main(){


    int arr[2][3] = { {4,7,8}, {8,8,7} };


    printResult(arr,2,3);

    return 0;
}
