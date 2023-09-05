class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>v;
   vector<int>ans;
   while(k)
   {
       v.push_back(k%10);
       k/=10;
   }
reverse(v.begin(),v.end());

   int i=num.size()-1;
   int j=v.size()-1;
   int c=0;
   int sum=0;
   while(i>=0 && j>=0)
   {

       sum=num[i]+v[j]+c;
       ans.push_back(sum%10);
       c=sum/10;
       i--;j--;
       
   }
   while(i>=0)
   {
        sum=num[i]+0+c;
       ans.push_back(sum%10);
       c=sum/10;
       i--;
   }
while(j>=0)
{
     sum=0+v[j]+c;
       ans.push_back(sum%10);
       c=sum/10;
       j--;
}
   
if(c)
{
    ans.push_back(c);
}
reverse(ans.begin(),ans.end());
return ans;
    }
};