class Solution {
public:
    int firstoccurence(vector<int>nums, int target)
    {
         int start=0;
        int end=nums.size()-1;
        int ans=-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                end=mid-1;
            }
            else{
                if(nums[mid]>target)
                    end=mid-1;
                else
                    start= mid+1;
            }  
        }
        return ans;
    }
    
    int lastoccurence(vector<int>nums, int target)
    {
         int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                start= mid+1;
            }
            else{
                  if(nums[mid]>target)
                    end=mid-1;
                else
                    start= mid+1;
            }  
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int > finalans;
        int FO= firstoccurence(nums,target);
        finalans.push_back(FO);
        int LO= lastoccurence(nums,target);
        finalans.push_back(LO);

       return finalans;
    }
};