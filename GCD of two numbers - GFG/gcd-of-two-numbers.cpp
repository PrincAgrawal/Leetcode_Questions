//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int a, int b) 
	{ 
	    // code here
	    if(a==0) return b;
	    
	    if(b==0) return a;
	    
	   // while(a>0 && b>0)
	   // {
	   //     if(a>b) a=a-b;
	        
	   //     if(b>a) b=b-a;
	   // }
	      
	      if(a>b){
	          gcd(a-b,b);
	      }
	      else{
	          gcd(a,b-a);
	      }
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends