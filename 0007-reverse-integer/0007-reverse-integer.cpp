class Solution {
public:
    int reverse(int x) {
      int y=x;
        
        if(x<INT_MIN || x>INT_MAX)
          return 0;
      long long int sum=0;
      while(y){
        int digit=y%10;
        sum= digit+sum*10;
         if(sum<INT_MIN || sum>INT_MAX)
          return 0;
        y=y/10;
      }
      
      return sum;
    }
};


