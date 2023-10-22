class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;

        while(i<nums.size()-1)
        {
            if(nums[i]<nums[i+1])
             i++;
             else
              break;
        }
        if(i==j)
         return 0;
        else{
            while(j>=0)
           {
              if(nums[j]>nums[j-1])
                 j--;
              else
                 break;
           }
        }
        
        if(nums[nums.size()-1]>nums[0])
           return -1;
        else if(j-i==1)
        {
            //possible ka case---->
            return nums.size()-j;
        }
        else{
            //not possible ka case----->
            return -1;
        }
    }
};