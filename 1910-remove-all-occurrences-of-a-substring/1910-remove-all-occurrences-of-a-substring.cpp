class Solution {
public:
    
    void removeOccure(string &s, string part){
        int found = s.find(part);
        
        if(found!=string::npos)
        {
            string left_substr = s.substr(0,found);
            string right_substr = s.substr(found+part.length(),s.size()-1);
            s= left_substr + right_substr;
        
        }
        else{
            return;
        }
        
        removeOccure(s,part);
        
    }
    string removeOccurrences(string s, string part) {
        
    // Method-1 --> 
        
        // int pos= s.find(part);
        //  while(pos!= string::npos)
        // {
        //     s.erase(pos,part.length());
        //      pos= s.find(part);
        // } 
        // return s;
        
   //Method-2 -->      
        removeOccure(s,part);
        return s;
        
        
        //  this is my own incomplete solution..-->
        
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