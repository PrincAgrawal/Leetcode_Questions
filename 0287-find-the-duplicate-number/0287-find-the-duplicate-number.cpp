class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-2;i++){
        //     if(nums[i]==nums[i+1])
        //         return nums[i];
        // }
        // return -1;
        
        // int ans=-1;
        // for(int i=0;i<nums.size();i++){
        //     int index=abs(nums[i]);
        //     if(nums[index]>0){
        //         nums[index]*=-1;
        //     }
        //     else{
        //         return index;
        //     }
        // }
        // return ans;
        
        
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};