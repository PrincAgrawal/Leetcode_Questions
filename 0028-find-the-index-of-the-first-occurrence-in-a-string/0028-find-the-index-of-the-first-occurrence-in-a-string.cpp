class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);
      if(found>=0)
        return found;
      
      return -1;
    }
};