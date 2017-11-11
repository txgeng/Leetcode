// Source : https://oj.leetcode.com/problems/two-sum/
// Author : Tongxing Geng
// Date   : 2017-09

/*
Pay attention to duplicate number in input
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapping;
        vector<int> result;

        for(int i = 0; i<nums.size(); i++){
            int temp = target - nums[i];
            if(mapping.find(temp) != mapping.end()){
                result.push_back(i);
                result.push_back(mapping[temp]);  
                break; 
            }
            mapping[nums[i]] = i;
        }
        return result;   
    }
};