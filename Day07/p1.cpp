#include<iostream>
using namespace std;

bool isPrime(int x){
    if (x <= 1) { 
        return false; // 0 and 1 are not prime
    }

    for(int i = 2; i  < x; i++){ // Optimize: Check up to the square root
        if(x % i == 0){
            return false; // Found a divisor, not prime
        }
    }
    return true; // No divisors found, it's prime
}

int main(){
    cout << isPrime(5) << endl; // Output: 1 (true)
    cout << isPrime(10) << endl; // Output: 0 (false)
    return 0;
} 
