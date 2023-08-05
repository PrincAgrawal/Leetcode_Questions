class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int s = 0;
        // int e = arr.size()-1;
        // int mid = s + (e-s)/2;
        // while(s<e){
        //     if(mid+1<arr.size()-1 && arr[mid] < arr[mid+1]){
        //         s = mid+1;
        //     }
        //     else{
        //         e = mid;
        //     }
        //     mid = s + (e-s)/2;
        // }
        // return e;
        int start=0;
        int end=arr.size()-1;
        int mid;
        while(start<end)
        {
            mid= start+(end-start)/2;
            if(mid-1>=0 && mid+1<=arr.size()-1 && 
                 arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
              return mid;
            if(arr[mid]<arr[mid+1])
               start= mid+1;
            else{
                end= mid;
            }
        }
        return -1;
    }
};