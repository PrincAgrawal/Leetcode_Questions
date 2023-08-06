class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        
        for(int i=0;i<timePoints.size();i++)
        {
            string curr = timePoints[i];
            int hours=stoi(curr.substr(0,2));
            int minute= stoi(curr.substr(3,2));
            int totalminutes= hours*60 + minute;
            minutes.push_back(totalminutes);
        }
        
        sort(minutes.begin(),minutes.end());
        int mint = INT_MAX;
        for(int i=0;i<minutes.size()-1;i++)
        {
            if(minutes[i+1]-minutes[i]<mint)
                mint=minutes[i+1]-minutes[i];
        }
        
        int lastdiff = minutes[0]+1440 - minutes[minutes.size()-1];
        
        mint = min(mint,lastdiff);
        return mint;
        
    }
};