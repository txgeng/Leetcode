// Source : https://oj.leetcode.com/problems/longest-substring-without-repeating-characters/
// Author : Tongxing Geng
// Date   : 2017-09

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int max_length = 0;
        string max_string = "";
        int this_length;
        map<char,int> mapping;
        for(int i = 0; i<s.size(); i++){
            
            if((mapping.find(s[i]) != mapping.end()) && mapping[s[i]] >= start){ // pay attention to conditin2
                start = mapping[s[i]] + 1;
                this_length = i - start + 1;

                mapping[s[i]] = i;
                if(this_length > max_length){
                    max_length = this_length;
                    max_string = s.substr(start, i+1);

                }
                
            }
            else{
                mapping[s[i]] = i;
                this_length = i - start + 1;
                if(this_length > max_length){
                    max_length = this_length;
                    max_string = s.substr(start, i+1);
 
                }
            }              
        }        
        return max_length;
    }
};