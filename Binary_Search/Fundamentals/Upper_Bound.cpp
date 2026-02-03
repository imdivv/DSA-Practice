#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>x){
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

int main()
{
    vector<int> nums = {3, 5, 8, 9, 15, 19};
    int x = 9;
    Solution solution;
    int ind = solution.upperBound(nums, x);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}
