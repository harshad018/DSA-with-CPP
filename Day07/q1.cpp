#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter the number: ";
    cin >> num;

    originalNum = num; 

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        cout << "Number is a palindrome" << endl;
    else
        cout << "Number is not a palindrome" << endl;

    return 0;
}
