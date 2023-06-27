// A Program to prints common element in all
// rows of matrix
#include <bits/stdc++.h>
using namespace std;

// Specify number of rows and columns
#define M 4
#define N 5

// prints common element in all rows of matrix
void printCommonElements(int mat[M][N])
{
	unordered_map<int,int> mp;
	
	for(int i=0;i<M;i++){
	    unordered_set<int> s;
	    
	    for(int j=0;j<N;j++){
	        s.insert(mat[i][j]);
	    }
	    
	    for(auto it=s.begin(); it!=s.end(); it++){
	        mp[*it]++;
	    }
	}
	
	for(auto it=mp.begin(); it!=mp.end();it++){
	    if(it->second==M) cout<<it->first<<" ";
	}
}

// driver program to test above function
int main()
{
	int mat[M][N] =
	{
		{1, 2, 1, 4, 8},
		{3, 7, 8, 5, 1},
		{8, 7, 7, 3, 1},
		{8, 1, 2, 7, 9},
	};

	printCommonElements(mat);

	return 0;
}
