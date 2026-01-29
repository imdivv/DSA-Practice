#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right=0;
        while(left>=0 and right<n){
            if(nums1[left]>nums2[right]){
                swap(nums1[left], nums2[right]);
                left--, right++;
            }
            else{
                break;
            }
        }
        sort(nums1.begin()+0, nums1.begin()+m);
        sort(nums2.begin(), nums2.end());
        for(int i=m; i<m+n; i++){
            nums1[i]=nums2[i-m];
        }
    }
};

int main() {
    
    vector<int> nums1 = {-5, -2, 4, 5, 0, 0, 0};
    vector<int> nums2 = {-3, 1, 8};
    int m = 4, n = 3;
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    cout << "The merged arrays is:\n";
    cout << "nums1[] = ";
    for (int i = 0; i < n + m; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}
