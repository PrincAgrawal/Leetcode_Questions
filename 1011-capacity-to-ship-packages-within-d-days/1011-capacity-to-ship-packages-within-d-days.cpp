class Solution {
public:
   bool isPossible(vector<int>arr,int days,int sol)
  {
      int countdays=1;
      int weightsum=0;
      for(int i=0;i<arr.size();i++)
      {
          if(arr[i]>sol)
           return false;
          else{
              if(weightsum+arr[i]>sol)
                {
                    countdays++;
                    weightsum=arr[i];
                    if(countdays>days)
                      return false;
                } 
                else{
                    weightsum+=arr[i];
                }
          }
      }
      return true;
  }
  
    int shipWithinDays(vector<int>& arr, int days) {
        if(days>arr.size()) 
         return -1;
        int s=0;
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossible(arr,days,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else{
              s=mid+1;
            }
        }
        return ans;
    }
};