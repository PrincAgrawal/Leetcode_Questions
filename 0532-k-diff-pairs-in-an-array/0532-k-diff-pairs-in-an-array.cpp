class Solution {
public:
 bool binary_search(vector<int> v,int s, int x)
        {
            int e= v.size()-1;
            int mid= s+(e-s)/2;

            while(s<=e)
            {
                if(v[mid]==x)
                {
                    return true;
                }
                else if(v[mid]>x)
                {
                    e= mid-1;
                }
                else{
                    s= mid+1;
                }
                mid= s+(e-s)/2;
            }
            return false;
        }
    int findPairs(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // set<pair<int,int>> ans;
        // int i=0,j=1;

        // while(j < nums.size())
        // {
        //     int diff= nums[j]-nums[i];
        //     if(diff==k)
        //     {
        //         ans.insert({nums[i],nums[j]});
        //         i++,j++;
        //     }
        //     else if(diff>k)
        //     {
        //        i++; 
        //     }
        //     else{
        //         j++;
        //     }
        //     if(i==j)
        //     {
        //         j++;
        //     }
        // }
        // return ans.size();
        sort(nums.begin(),nums.end());
        int i=0;
        set<pair<int,int>> ans;
        while(i<nums.size())
        {
            int find= k+nums[i];
            if(binary_search(nums,i+1,find))
            {
               ans.insert({nums[i],nums[i]+k});
            }
             i++;
        }
        return ans.size();
    }
};