#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long n=nums.size();
        long S=0, Sn=(n*(n+1))/2;
        long S2=0, S2n= (n*(n+1)*(2*n+1))/6;
        for(int i=0; i<n; i++){
            S+=nums[i];

        }
        for(int i=0; i<n; i++){
            S2+=nums[i]*nums[i];
        }
        int d1= S-Sn;
        int d2= S2-S2n;
        int sum= d2/d1;
        int A= (sum+d1)/2;
        int B=(sum-d1)/2;
        return {A, B};
    }
};

int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    Solution sol;
    vector<int> result = sol.findMissingRepeatingNumbers(nums);
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}
