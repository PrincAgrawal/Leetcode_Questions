//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
        // code here
        int maxLeft[n];
      int maxRight[n];
      
      maxLeft[0]=0;
       long long water=0;
      for(int i=1;i<n;i++)
      {
        int mini1=max(maxLeft[i-1],height[i-1]);
        maxLeft[i]=mini1;
      }
      
       maxRight[n-1]=0;
      for(int i=n-2;i>=0;i--)
      {
        int mini2=max(maxRight[i+1],height[i+1]);
        maxRight[i]=mini2;
      }
      
      for(int i=0;i<n;i++)
      {
         int mini3=min(maxLeft[i],maxRight[i]);
        long long found=mini3-height[i];
        // if(found>=0){
        //   ans.push_back(found);
        // }
        // else{
        //   ans.push_back(0);
        // }
        if(found>=0)
          water=water+found;
      }
      return water;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends