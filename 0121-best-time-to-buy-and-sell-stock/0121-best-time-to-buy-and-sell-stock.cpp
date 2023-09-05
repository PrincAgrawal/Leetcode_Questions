class Solution {
public:
    int maxProfit(vector<int>&nums){
//         int mini=INT_MAX;
//         int i;
//         int min_index;
//         for( i=0;i<prices.size();i++){
//             if(prices[i]<mini){
//                 mini=prices[i];
//                 min_index=i;
//             }
//         }
        
//         if(min_index==prices.size()) return 0;
        
//         int max_profit=0;
//         for(int j=min_index+1;j<prices.size();j++)
//         {
//             int profit= prices[j]-mini;
//             if(profit>max_profit)
//                 max_profit=profit;
//         }
//         return max_profit;
        
//         int max=0;
//         int m=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//              if(i==nums.size()-1)
//                 return 0;
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[j]>max)
//                 {
//                     max=nums[j];
//                 }
                
//             }
//             if(max-nums[i]>m)
//             {
//                 m=max-nums[i];
//             }
           
//         }
//          int m=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                // m=max(m,nums[j]-nums[i]);
//                 if(m<nums[j]-nums[i])
//                 m=nums[j]-nums[i];
                
//             }
//         }
//     return m;
        int mp=0;
        int m=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            m=min(m,nums[i]);
            int p=nums[i]-m;
            mp=max(mp,p);
        }
        return mp;
    }
};