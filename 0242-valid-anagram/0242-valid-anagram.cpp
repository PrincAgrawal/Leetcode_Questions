class Solution {
public:
    bool isAnagram(string s, string t) {
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         if(s==t)
//           return true;
//         else
//             return false;
        
 //-------------------------------------------------------

        int hash[256]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]]++;
        }
        for(int j=0;j<t.size();j++)
        {
            hash[t[j]]--;
        }
        for(int i=0;i<256;i++)
        {
            if(hash[i]!=0)
              return false;
        }
        return true; 
    }
};