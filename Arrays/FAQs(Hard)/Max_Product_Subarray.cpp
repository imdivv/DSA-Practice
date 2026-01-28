#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        for(int i=0; i<nums.size(); i++){
            int prod=nums[i];
            for(int j=i+1; j<nums.size(); j++){
                    maxprod=max(maxprod, prod);
                    prod*=nums[j];
            }
            maxprod=max(maxprod, prod);
        }
        return maxprod;
    }
};

int main() {
	vector<int> nums = {4, 5, 3, 7, 1, 2};
	Solution sol;
	int ans = sol.maxProduct(nums);

	cout << "The product of elements in maximum product subarray is: " << ans;

	return 0;
}
