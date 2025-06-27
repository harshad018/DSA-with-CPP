#include<iostream>

using namespace std;

int tilingProblem(int n){

    if ( n == 1 || n == 0){
        return 1;
    }

    //vertical
    int ans1 = tilingProblem(n-1); //2xn-1


    //horizontal
    int ans2 = tilingProblem(n-2);


    return ans1 + ans2;
}

int main(){

    int n = 4;

    cout << tilingProblem(n)<<endl;
    return 0;
}
