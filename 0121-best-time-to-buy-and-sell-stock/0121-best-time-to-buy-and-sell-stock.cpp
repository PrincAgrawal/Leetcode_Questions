class Solution {
public:
    void maxProfitFinder(vector<int>&prices , int i, int &minPrice,int &maxProfit)
    {
         //base case
        if(i==prices.size()) 
            return;
         
        //ek case -->
        if(prices[i]<minPrice) minPrice=prices[i];
        int todayProfit= prices[i]-minPrice;
        if(todayProfit >maxProfit)
            maxProfit=todayProfit;
        
        
        maxProfitFinder(prices,i+1,minPrice,maxProfit);
    }
    int maxProfit(vector<int>&prices){
        int maxProfit=INT_MIN;
        int minPrice=INT_MAX;
      maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit;
//         int mini=INT_MAX;
//         int i;
//         int min_index;
//         for( i=0;i<prices.size()-1;i++){
//             if(prices[i]<mini && prices[i]!=0){
//                 mini=prices[i];
//                 min_index=i;
//             }
//         }
        
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
        // int mp=0;
        // int m=nums[0];
        // for(int i=0;i<nums.size();i++)
        // {
        //     m=min(m,nums[i]);
        //     int p=nums[i]-m;
        //     mp=max(mp,p);
        // }
        // return mp;
    }
};