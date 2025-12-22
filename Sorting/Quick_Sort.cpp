class Solution {
    int partition(vector<int>& arr, int low, int high){
        int pivot=arr[low];
        int i=low;
        int j=high;

        while(i<j){
            while(arr[i]<= pivot and i<=high-1){
                i++;
            }
            while(arr[j]>pivot and j>=low+1){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
        return j;
    }

    void qshelp(vector<int>& arr, int low, int high){
        if(low<high){
            int pIndex=partition(arr,low, high);
            qshelp(arr,low,pIndex-1);
            qshelp(arr,pIndex+1, high);
        }
    }
public:
    vector<int> quickSort(vector<int>& nums) {
        qshelp(nums,0,nums.size()-1);
        return nums;

    }
};
