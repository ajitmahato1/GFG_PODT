//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here.
	    bool p=1;
        for(int i=n-1;i>=max(n-32,0);i--){
            int cnt=__builtin_popcount(i);
            if(i+cnt==n){
                p=0;
                break;
            }
        }
        return p;

	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends