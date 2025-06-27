#include<iostream>
#include<cstring>

using namespace std;


class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if ( word1.length() != word2.length){
            return false
        }else{
            int count[26];

            for ( char ch1 : word1){
                count[ch1 - 'a']++;
            }

            for ( char ch2 : word2 ){
                if ( count[ch2 - 'a'] == 0){
                    return false;
                }else{
                    count[ch2 - 'a']--;
                }
            }

            for ( int i = 0; i < 26 ; i++){

                if ( count[i] != 0){
                    return false;
                }
            }

        }
        return true;
    }
};
