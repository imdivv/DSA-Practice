class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int min=i;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]<nums[min]){
                    min=j;
                }
            }
            if(min!=i){
                int temp=nums[min];
                nums[min]=nums[i];
                nums[i]=temp;

            }
             
        }
        return nums;
    }
};
