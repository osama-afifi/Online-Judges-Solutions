#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<queue>
#include<set>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

int G[1009];
int n;

__inline void grundy()
{
	G[0]=0;
	G[1]=1;  
	for(int i=2; i<=150; i++)  
	{  
		set<int>S;
		S.insert(G[i-2]);  
		for(int j=0; j<=i-3; j++)  
			S.insert((G[j] ^ ((i-j-3>=0)? G[i-j-3] : 0)) );  
		int g=0;
		while(S.find(g)!=S.end())++g;
		G[i]=g;
	}  
}


int main()
{
	freopen("input.in", "r" , stdin);

	grundy();
	while(cin>>n)
	{

		if(n<68)
			puts((G[n])? "White" : "Black");
		else
			puts((G[(n%34)+68])? "White" : "Black");
	}
	return 0;
}