#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1; j<nums.size(); j++){
                if(j>i+1 and nums[j]==nums[j-1]){
                    continue;
                }
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                    if(nums[i]+nums[j]+nums[k]+nums[l]==target){
                        vector<int>temp={nums[i],nums[j], nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                    
                        while(k<l and nums[k]==nums[k-1]) k++;
                        while(k<l and nums[l]==nums[l+1]) l--;
                    }
                    else if(nums[i]+nums[j]+nums[k]+nums[l]<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                    
                }
                
            }
            
        }
        return ans;
    }

};

int main() {
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    Solution sol;
    
    vector<vector<int>> ans = sol.fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto& it : ans) {
        cout << "[";
        for (auto& ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    
    return 0;
}
