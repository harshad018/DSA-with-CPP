#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

void FirstNonRepeat(string str) {
    queue<char> Q;
    unordered_map<char, int> freq;  // To store frequencies of characters

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        // Increment frequency of the current character
        freq[ch]++;
        Q.push(ch);

        // Remove all characters from the front of the queue that have frequency greater than 1
        while (!Q.empty() && freq[Q.front()] > 1) {
            Q.pop();
        }

        // If the queue is empty, there is no non-repeating character
        if (Q.empty()) {
            cout << "-1 ";
        } else {
            cout << Q.front() << " ";
        }
    }

    cout << endl; // To move the output to the next line after the loop
}

int main() {
    string str = "aabccxb";
    FirstNonRepeat(str);
    return 0;
}
