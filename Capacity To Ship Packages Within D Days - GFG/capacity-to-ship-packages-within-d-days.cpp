//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool isPossible(int arr[],int n,int days,int sol)
  {
      int countdays=1;
      int weightsum=0;
      for(int i=0;i<n;i++)
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
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        if(D>N) 
         return -1;
        int s=0;
        int e=accumulate(arr,arr+N,0);
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossible(arr,N,D,mid))
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

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends