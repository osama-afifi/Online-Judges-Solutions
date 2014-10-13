

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
#include<stack>
#include<math.h>


#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

int next[2009][30];
	string s1,s2;

int solve(int idx , int k)
{



}

int main()
{
	freopen("input.in", "r" , stdin);


	while(cin >> s1 >> s2)
	{
		Set(next,-1);
		for(int i = s1.size()-1 ; i>=0 ; i--)
		{
			FOR(j,0,27)
				next[i][j]=next[i+1][j];
			next[i][s1[i]-'a']=i;
		}
	}
	return 0;
}