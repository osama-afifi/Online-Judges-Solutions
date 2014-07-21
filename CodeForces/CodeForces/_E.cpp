#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) (A.begin(), A.end())
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;
int oo=1<<25;

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp make_pair 
#define MAX 100000
using namespace std;

int index[6][10] = 
{
	{  0 , 1 , 2, -1, -1, },
	{  3 , 4 , 5 , 6,  7, -1, },
	{  8 , 9 , 10 , 11,  12, -1, },
	{  13 , 14 , 15 , 16,  -1, -1, },
	{  17 , 18 , 19 , -1,  -1, -1, },
	{ -1 , -1 , -1 , -1, -1 , -1, -1}
};


char M[10][10];
int dp[1<<20][2];
int target;
vector<pair<int,int> >arr;

bool solve(int mask , bool turn)
{
	if(mask==target)
			return true;



	if(dp[mask][turn]!=-1)
		return dp[mask][turn];

	for(int i = 0 ; i< arr.size() ; i++)
	{
		int x = arr[i].first;
		int y = arr[i].second;
		int cur = index[x][y];

		if(!(mask&(1<<cur)))
		{
			int m = mask;
			for(int j = y ; j<5 ;j++)
			{
				if(M[x][j] == 'O' && index[x][j]!=-1)
				{
					m |= (1<<index[x][j]);

						if(!solve(m, turn^1))
							return dp[mask][turn] = true;
				}
				else break;
			}
			 m = mask;
			for(int j = x ; j<5  ;j++)	
			{
				if(M[j][y] == 'O' && index[j][y]!=-1)
				{
					m |= (1<<index[j][y]);

						if(!solve(m, turn^1))
							return dp[mask][turn] = true;
				}
				else break;
			}
			 m = mask;
			for(int j = 0 ; j<5  ;j++)
			{
				if(M[x+j][y+j] == 'O' && index[x+j][y+j]!=-1)
				{
					m |= (1<<index[x+j][y+j]);

						if(!solve(m, turn^1))
							return dp[mask][turn] = true;

				}
				else break;
			}
		}
	}

		return dp[mask][turn] = false;
}

int main()
{
	freopen("input.in","r",stdin);

	FOR(i,0,3)
		cin>>M[0][i];
	FOR(i,0,4)
		cin>>M[1][i];
	FOR(i,0,5)
		cin>>M[2][i];
	FOR(i,0,4)
		cin>>M[3][i];
	FOR(i,0,3)
		cin>>M[4][i];

	target = 0;
	arr.clear();

	FOR(i,0,5)
		FOR(j,0,5)
		if(M[i][j] == 'O' && index[i][j]!=-1)
			target |=  (1<<index[i][j]), arr.push_back(mp(i,j));

	Set(dp,-1);

		int res = solve(0, 1);

	if(res>0)
		cout<< "Karlsson" <<endl;
	else 
		cout<< "Lillebror" <<endl;

	return 0;
}
