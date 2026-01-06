class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int  j=0;
        while(i<n1 and j<n2){
            if(nums1[i]==nums2[j]){
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
        }
        return result;
    }
};
