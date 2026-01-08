#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int>result;
      result.push_back(nums[nums.size()-1]);
      int max=nums[nums.size()-1];
      for(int i=nums.size()-2; i>=0; i--){
        
        if(nums[i]>max){ 
            result.push_back(nums[i]);
            max=nums[i];
        }
      }
      reverse(result.begin(), result.end());
      return result;
    }
};

int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    Solution finder;
    vector<int> ans = finder.leaders(nums);
    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
