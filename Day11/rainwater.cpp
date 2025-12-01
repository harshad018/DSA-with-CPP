#include <iostream>
#include <algorithm> // For max and min
using namespace std;

void trap(int heights[], int n) {
    if (n <= 2) { return;}

    int leftMax[20000], rightMax[20000];

    // --- PHASE 1: PRE-CALCULATE LEFT MAX ---
    // At every index i, what is the highest wall from 0 to i?
    leftMax[0] = heights[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i]); 
    }

    // --- PHASE 2: PRE-CALCULATE RIGHT MAX ---
    // At every index i, what is the highest wall from i to n-1?
    rightMax[n-1] = heights[n-1]; // Initialize the LAST element
    for (int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i]);
    }
    
    // --- PHASE 3: CALCULATE WATER ---
    int waterTrapped = 0;
    for (int i = 0; i < n; i++) {
        // The water level is limited by the shorter of the two tallest walls
        
        waterTrapped += min(leftMax[i], rightMax[i]) - heights[i];
    }

    cout << "Water Trapped is: " << waterTrapped << endl;
}
