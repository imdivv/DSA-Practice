class Solution {
    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;

        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        for(int i=low; i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    void mshelp(vector<int>& arr, int low, int high){
        if (low>=high){
            return;
        }

        int mid=(low+high)/2;
        mshelp(arr, low, mid);
        mshelp(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
public:
    vector<int> mergeSort(vector<int>& nums) {
        int n=nums.size();
        mshelp(nums,0,n-1);
        return nums;

    }
};
