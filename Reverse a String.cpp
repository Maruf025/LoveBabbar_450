//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    char arr[str.length()];
    int j=0;
    for(int i=str.length()-1;i>=0;i--){
        arr[j]=str[i];
        j++;
    }
    
    for(int i=0;i<str.length();i++){
        str[i]=arr[i];
    }
    
    return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends
