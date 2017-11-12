// Source : https://oj.leetcode.com/problems/container-with-most-water/
// Author : Tongxing Geng
// Date   : 2017-09


class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;
        int this_water = 0;
        while(right>left){ // here have to be right>left, because left++, right-- may cause right<left
            this_water = (right - left) * ( height[left] < height[right] ? height[left] : height[right]);
            if(this_water>max_water){
                max_water= this_water;
            }
            if(height[left] < height[right]){
                left++;
            }
            else if(height[left] > height[right]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return max_water;
    }
};