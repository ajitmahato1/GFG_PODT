#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int firstOccurance(int arr[], int n , int x){
        int s = 0;
        int e = n - 1;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid]==x){
                ans = mid;
                e = mid - 1 ;
            }
            else if(arr[mid]<x){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
    
    int lastOccurance(int arr[], int n , int x){
        int s = 0;
        int e = n - 1;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid]==x){
                ans = mid;
                s = mid + 1 ;
            }
            else if(arr[mid]<x){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int first = firstOccurance(arr,n,x);
        int last = lastOccurance(arr,n,x);
        return{first,last};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends