//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int getValue(char roman){
        switch(roman){
            case 'I': return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
        }
    }
    int romanToDecimal(string &str) {
        // code here
        int n = str.length();
        int ans = 0;
        
        int roman1 = 0;
        int roman2 = 0;
        
        for(int i = 0;i<n;i++){
            roman1 = getValue(str[i]);
            if(i+1 < n){
                roman2 = getValue(str[i+1]);
            }else roman2 = 0;
            
            if(roman1 < roman2){
                ans += roman2 - roman1;
                ++i;
            }else{
                ans += roman1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends