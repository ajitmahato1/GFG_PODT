//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here
        vector<int>x;
        vector<int>y;
        int n=matrix.size();
        int m=matrix[0].size();
        
        //get the index 

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        //make all row 1
        for(int i=0;i<x.size();i++){
           int ind=x[i];
           for(int j=0;j<m;j++){
               matrix[ind][j]=1;
           }
       }
       //make all col1;
       for(int i=0;i<y.size();i++){
           int ind=y[i];
           for(int j=0;j<n;j++){
               matrix[j][ind]=1;
           }
       }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends