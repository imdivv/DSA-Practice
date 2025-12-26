class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int firstLargest= INT_MIN;
        int secondLargest= INT_MIN;
        if(nums.size()<2){
            return -1;
        }
        for(int i=0; i<nums.size();i++){
            if(nums[i]> firstLargest){
                secondLargest=firstLargest;
                firstLargest=nums[i];
            }
            else if(nums[i]> secondLargest and nums[i]!=firstLargest){
                secondLargest=nums[i];
            }
        }
        return secondLargest==INT_MIN ? -1 : secondLargest;
        
      
    }
};
