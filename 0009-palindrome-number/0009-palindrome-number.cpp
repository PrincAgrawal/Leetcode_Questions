class Solution {
public:
    bool isPalindrome(int x) {
      int  y=x;
      
      if(x<0)
        return false;
      
         if(x<INT_MIN || x>INT_MAX)
          return 0;
      long long int sum=0;
      while(x){
        int digit=x%10;
        sum= digit+sum*10;
         if(sum<INT_MIN || sum>INT_MAX)
          return 0;
        x=x/10;
      }
      
      if(y==sum)
        return true;
      else
         return false;
    }
};