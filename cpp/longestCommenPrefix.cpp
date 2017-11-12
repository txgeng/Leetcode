// Source : https://oj.leetcode.com/problems/longest-common-prefix/
// Author : Tongxing Geng
// Date   : 2017-09

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty() == true){
            return "";
        }
        for(int i = 0; i<strs[0].size(); ++i){ //++i
            for (int j = 1; j<strs.size(); j++){
                if((i+1)>strs[i].size() || strs[j][i] != strs[0][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    
    }
};

/*
size() is there to be consistent with other STL containers (like vector, map, etc.) 
and length() is to be consistent with most peoples' intuitive notion of character strings.
*/