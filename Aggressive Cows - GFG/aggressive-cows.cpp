//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int>nums,int k , int sol)
    {
        int cowCount=1;
        int lastpos=nums[0];
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]-lastpos>sol)
            {
                cowCount++;
                lastpos=nums[i];
                if(cowCount==k)
                  return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &nums) {
    
        // Write your code here
        sort(nums.begin(),nums.end());
        int s=0;
        int e= nums[nums.size()-1];
        
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossible(nums,k,mid)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends