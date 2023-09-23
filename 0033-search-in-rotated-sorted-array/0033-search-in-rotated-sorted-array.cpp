class Solution {
public:
  int findPivot(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
        if (s == e)
            return s;

        int mid = s + (e - s) / 2;

        if (mid + 1 < nums.size() && nums[mid] > nums[mid + 1])
            return mid;
        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
            return mid - 1;

        if (nums[mid] >= nums[s])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
  
  int binary_search(vector<int>nums,int s, int e, int target)
  {
    while(s<=e)
    {
      int mid=s+(e-s)/2;
      
      if(nums[mid]==target)
        return mid;
      
      if(nums[mid]>target)
        e=mid-1;
      else
        s=mid+1;
    }
    return -1;
  }
  
  
    int search(vector<int>& nums, int target) {
     int s=0;
      int e=nums.size()-1;
      
      int pivot=findPivot(nums);
      
      if(target<=nums[pivot] && target>=nums[s])
      {
        return binary_search(nums,s,pivot,target);
      }
     else
      {
        return binary_search(nums,pivot+1,e,target);
      }
      
    }
};