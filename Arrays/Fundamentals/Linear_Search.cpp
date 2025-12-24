// Problem: Linear Search in Array
// Source: A2Z DSA Sheet (Striver)
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
