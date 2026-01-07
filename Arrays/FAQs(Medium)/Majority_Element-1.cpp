#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(cnt==0){
                cnt++;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }

        }
        int cnt1=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el) cnt1++;
        }
        if(cnt1> n/2){
            return el;
        }
        else{
            return -1;
        }

    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    Solution sol;
    int ans = sol.majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
