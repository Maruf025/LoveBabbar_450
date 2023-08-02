//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length() != s2.length()) return 0;
        
        int n=s1.length();
        string temp1,temp2, temp3;
        
        for(int i=0;i<n;i++){
            
            temp1= s2.substr(i, n-i);
            temp2= s2.substr(0, i);
            temp3= temp1+temp2;
            
            if(s1==temp3) return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
