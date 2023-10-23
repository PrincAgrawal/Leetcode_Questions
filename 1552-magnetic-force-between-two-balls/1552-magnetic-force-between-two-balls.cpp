class Solution {
public:
  bool isPossible(vector<int>nums,int m , int sol)
  {
    int count=1;
    int firstpos=nums[0];
    
    for(int i=1;i<nums.size();i++)
    {
      if(nums[i]-firstpos>=sol)
      {
        count++;
        firstpos=nums[i];
        if(count==m)
          return true;
      }
    }
    return false;
  }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
      int start=0;
      long long end=*max_element(nums.begin(),nums.end());
      
      int ans=-1;
      while(start<=end)
      {
        int mid=start+(end-mid)/2;
        if(isPossible(nums,m,mid))
        {
          ans=mid;
          start=mid+1;
        }
        else{
          end=mid-1;
        }
      }
      return ans;
    }
};