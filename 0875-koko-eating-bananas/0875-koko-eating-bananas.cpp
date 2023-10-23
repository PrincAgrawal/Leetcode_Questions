class Solution {
public:
  bool isPossible(vector<int>nums,int h,int sol)
  {
    int hours=0;
    
    for(int i=0;i<nums.size();i++)
    {
       hours+=nums[i]/sol;
      if(nums[i]%sol)
        hours+=1;
      
      if(hours>h)
         return false;
    }
    return true;
  }
    int minEatingSpeed(vector<int>& nums, int h) {
      sort(nums.begin(),nums.end());
      int start=1;
      int end=*max_element(nums.begin(),nums.end());
      
      int ans=-1;
      while(start<=end)
      {
        int mid=start+(end-start)/2;
        if(isPossible(nums,h,mid))
        {
          ans=mid;
          end=mid-1;
        }
        else{
          start=mid+1;
        }
      }
      return ans;
    }
};