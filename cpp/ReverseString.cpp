// Source : https://leetcode.com/problems/reverse-string/
// Author : Tongxing Geng
// Date   : 2017-09

// Two pointers, one loop from begin, the other loop form end; swap.

class Solution {
public:
    string reverseString(string s) {
        for(int i = 0; i<s.size()/2; i++){
            char temp = s[i];
            s[i] = s[s.size() - i -1];
            s[s.size() - i -1] = temp;           
        }
        return s;
    }
};