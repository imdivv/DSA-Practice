#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        vector<int> ans;
        int el1=INT_MIN;
        int el2= INT_MIN;
        int cnt1=0, cnt2=0;
        int n= nums.size();
        for(int i =0; i<n; i++){
            if(cnt1==0 and nums[i]!=el2){
                el1=nums[i];
                cnt1++;
            }
            else if(cnt2==0 and nums[i]!=el1){
                el2=nums[i];
                cnt2++;
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int cnt11=0, cnt22=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el1) cnt11++;
            if(nums[i]==el2) cnt22++;
        }
        if(cnt11>=n/3+1) ans.push_back(el1);
        if(cnt22>=n/3+1) ans.push_back(el2);
        return ans;
    }
};

int main() {
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    Solution sol;
    vector<int> ans = sol.majorityElementTwo(arr);
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}
