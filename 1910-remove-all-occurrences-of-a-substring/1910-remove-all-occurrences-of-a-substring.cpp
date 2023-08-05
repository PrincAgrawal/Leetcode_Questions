class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos= s.find(part);
         while(pos!= string::npos)
        {
            s.erase(pos,part.length());
             pos= s.find(part);
        } 
        return s;  

        // int ele = part.length();
        // int i=0;
        // int j;
        // while(i<s.length())
        // {
        //     for(int j=i;j<ele;j++)
        //     {
        //         if(s[j]!=part[j])
        //          break;
        //     }
        //     if(j==ele)
        //     {
        //         s.erase(i,ele);
        //         i=0;
        //         // i=j;
        //     }
        //     else
        //         i++;
        // }
        // return s;
    }
};