#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int firstOccur( vector<int> arr , int i, int target){
    if ( i == arr.size()){
        return -1;
    }

    if ( arr[i] == target){
        return i;
    }

   return  firstOccur(arr, i+1,target);
}

int lastOccur(vector<int> arr, int i, int target){
    if ( i == arr.size()){
        return -1;
    }

    int idxFound = lastOccur(arr, i+1, target);

    if ( idxFound == -1){
        if (arr[i] == target){
            return i;
        }
    }

    return idxFound;
}

int main(){

    vector<int> arr = {1,3,3,3,5};

    int ans = firstOccur(arr, 0,3);

    cout<<ans<<endl;

    int ans2 = lastOccur(arr, 0, 3);

    cout<<ans2<<endl;

    return 0;
}
