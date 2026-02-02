#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
        
    }
};

int main() {
    vector<int> arr = {1, 2, 2, 3};
    int x = 2;
    Solution sol;
    int ind = sol.lowerBound(arr, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}
