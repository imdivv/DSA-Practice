#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>temp={nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                while(j<k and nums[j]==nums[j-1]) j++;
                while(j<k and nums[k]==nums[k+1]) k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution sol;
    vector<vector<int>> ans = sol.threeSum(nums);
    for (auto& triplet : ans) {
        cout << "[";
        for (auto& num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    
    return 0;
}
