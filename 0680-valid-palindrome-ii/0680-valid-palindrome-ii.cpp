class Solution {
public:
  bool checkPalindrome(string s,int n)
  {
    s.erase(n,1);
    int i=0;
    int j=s.length()-1;
    while(i<=j){
      if(s[i]!=s[j]){
        return false;
      }
        i++;
        j--;
    }
      return true;
  }
    bool validPalindrome(string s) {
        int i=0;
      int j=s.length()-1;
      
      while(i<=j)
      {
        if(s[i]==s[j]){
          i++;
          j--;
        }
        else{
          return checkPalindrome(s,i)||checkPalindrome(s,j);
        }
      }
      return true;
    }
};