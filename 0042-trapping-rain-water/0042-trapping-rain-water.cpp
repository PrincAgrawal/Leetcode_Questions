class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();
        int maxLeft[n];
      int maxRight[n];
      
      maxLeft[0]=0;
       int water=0;
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
        int found=mini3-height[i];
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