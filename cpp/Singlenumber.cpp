// Source : https://oj.leetcode.com/problems/single-number/
// Author : Tongxing Geng
// Date   : 2017-09

//using hashmap to solve this problem

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mapping;
        for(int i=0; i<nums.size(); i++){
            if(mapping.find(nums[i]) == mapping.end()){
                mapping[nums[i]] = i;
            }
            else{
                mapping.erase(nums[i]);
            }   
        }
        return mapping.begin()->first;
    }
};