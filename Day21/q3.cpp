#include<iostream>
#include<vector>
using namespace std;

long long merge(int arr[], int si, int mid, int ei) {
    vector<int> temp;
    int i = si;
    int j = mid + 1;
    long long invCount = 0;

    while(i <= mid && j <= ei) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            // Count inversions - all elements from i to mid will form inversions
            invCount += (mid - i + 1);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i++]);
    }

    while(j <= ei) {
        temp.push_back(arr[j++]);
    }

    for(int i = si, k = 0; i <= ei; i++, k++) {
        arr[i] = temp[k];
    }

    return invCount;
}

long long mergeSort(int arr[], int si, int ei) {
    long long invCount = 0;
    if(si < ei) {
        int mid = si + (ei - si)/2;
        invCount += mergeSort(arr, si, mid);
        invCount += mergeSort(arr, mid + 1, ei);
        invCount += merge(arr, si, mid, ei);
    }
    return invCount;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int n = 5;
    long long inversions = mergeSort(arr, 0, n-1);
    cout << "Number of inversions: " << inversions << endl;
    return 0;
}
