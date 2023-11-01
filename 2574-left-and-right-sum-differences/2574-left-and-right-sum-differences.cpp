class Solution {
public:
  int sums(vector<int>nums,int s,int e){
    int sum=0;
    for(int i=s;i<=e;i++){
      sum+=nums[i];
    }
    return sum;
  }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
      int i=0;
      while(i<nums.size()){
        int leftsum=sums(nums,0,i-1);
        int rightsum=sums(nums,i+1,nums.size()-1);
        int diff=abs(leftsum-rightsum);
        ans.push_back(diff);
        i++;
      }
      return ans;
    }
};