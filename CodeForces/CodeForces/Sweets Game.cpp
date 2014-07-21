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
int x[] = {8,3,2,1,129};
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


void init() {
	sz[ 0 ]= 3 ;
	line[ 0 ][ 0 ]=0;
	line[ 0 ][ 1 ]=1;
	line[ 0 ][ 2 ]=2;

	sz[ 1 ]= 4 ;
	line[ 1 ][ 0 ]=3;
	line[ 1 ][ 1 ]=4;
	line[ 1 ][ 2 ]=5;
	line[ 1 ][ 3 ]=6;

	sz[ 2 ]= 5 ;
	line[ 2 ][ 0 ]=7;
	line[ 2 ][ 1 ]=8;
	line[ 2 ][ 2 ]=9;
	line[ 2 ][ 3 ]=10;
	line[ 2 ][ 4 ]=11;

	sz[ 3 ]= 4 ;
	line[ 3 ][ 0 ]=12;
	line[ 3 ][ 1 ]=13;
	line[ 3 ][ 2 ]=14;
	line[ 3 ][ 3 ]=15;

	sz[ 4 ]= 3 ;
	line[ 4 ][ 0 ]=16;
	line[ 4 ][ 1 ]=17;
	line[ 4 ][ 2 ]=18;

	sz[ 5 ]= 3 ;
	line[ 5 ][ 0 ]=2;
	line[ 5 ][ 1 ]=6;
	line[ 5 ][ 2 ]=11;

	sz[ 6 ]= 4 ;
	line[ 6 ][ 0 ]=1;
	line[ 6 ][ 1 ]=5;
	line[ 6 ][ 2 ]=10;
	line[ 6 ][ 3 ]=15;

	sz[ 7 ]= 5 ;
	line[ 7 ][ 0 ]=0;
	line[ 7 ][ 1 ]=4;
	line[ 7 ][ 2 ]=9;
	line[ 7 ][ 3 ]=14;
	line[ 7 ][ 4 ]=18;

	sz[ 8 ]= 4 ;
	line[ 8 ][ 0 ]=3;
	line[ 8 ][ 1 ]=8;
	line[ 8 ][ 2 ]=13;
	line[ 8 ][ 3 ]=17;

	sz[ 9 ]= 3 ;
	line[ 9 ][ 0 ]=7;
	line[ 9 ][ 1 ]=12;
	line[ 9 ][ 2 ]=16;

	sz[ 10 ]= 3 ;
	line[ 10 ][ 0 ]=11;
	line[ 10 ][ 1 ]=15;
	line[ 10 ][ 2 ]=18;

	sz[ 11 ]= 4 ;
	line[ 11 ][ 0 ]=6;
	line[ 11 ][ 1 ]=10;
	line[ 11 ][ 2 ]=14;
	line[ 11 ][ 3 ]=17;

	sz[ 12 ]= 5 ;
	line[ 12 ][ 0 ]=2;
	line[ 12 ][ 1 ]=5;
	line[ 12 ][ 2 ]=9;
	line[ 12 ][ 3 ]=13;
	line[ 12 ][ 4 ]=16;

	sz[ 13 ]= 4 ;
	line[ 13 ][ 0 ]=1;
	line[ 13 ][ 1 ]=4;
	line[ 13 ][ 2 ]=8;
	line[ 13 ][ 3 ]=12;

	sz[ 14 ]= 3 ;
	line[ 14 ][ 0 ]=0;
	line[ 14 ][ 1 ]=3;
	line[ 14 ][ 2 ]=7;
}

char M[10][10];
int dp[1<<20];
int target;
vector<pair<int,int> >arr;


bool solve(int mask)
{
	if(mask==target)
		return false;

	if(dp[mask]!=-1)
		return dp[mask];

	dp[mask]=false;

	for(int i = 0 ; i< arr.size() ; i++)
	{
		int x = arr[i].first;
		int y = arr[i].second;
		int cur = index[x][y];

		if(!(mask&(1<<cur)))
		{
			int m = mask;
			for(int j = y ;  ;j++)
			{
				if(M[x][j] == 'O' && index[x][j]!=-1)
				{
					m |= (1<<index[x][j]);


				}
				else
				{
					if(m!=mask && !solve(m))
						dp[mask] = true;
					break;
				}
			}
			m = mask;
			for(int j = x ; j<5  ;j++)	
			{
				if(M[j][y] == 'O' && index[j][y]!=-1)
				{
					m |= (1<<index[j][y]);

				}
				else
				{
					if(m!=mask && !solve(m))
						dp[mask] = true;
					break;
				}
			}
			m = mask;
			for(int j = 0 ; j<5  ;j++)
			{
				if(M[x+j][y+j] == 'O' && index[x+j][y+j]!=-1)
				{
					m |= (1<<index[x+j][y+j]);


				}
				else
				{
					if(m!=mask && !solve(m))
						dp[mask] = true;
					break;
				}

			}
			m= mask;
			for(int j = 0 ; j<5  ;j++)
			{
				if(y-j>=0 && M[x+j][y-j] == 'O' && index[x+j][y-j]!=-1)
				{
					m |= (1<<index[x+j][y-j]);


				}
				else
				{
					if(m!=mask && !solve(m))
						dp[mask] = true;
					break;
				}

			}
		}
	}

	return dp[mask];
}

int main()
{
	freopen("input.in","r",stdin);

	FOR(i,0,3)
		cin>>M[0][i+2];
	FOR(i,0,4)
		cin>>M[1][i+1];
	FOR(i,0,5)
		cin>>M[2][i];
	FOR(i,0,4)
		cin>>M[3][i+1];
	FOR(i,0,3)
		cin>>M[4][i+1];

	target = 0;
	arr.clear();

	FOR(i,0,5)
		FOR(j,0,5)
		if(M[i][j] == 'O' && index[i][j]!=-1)
			target |=  (1<<index[i][j]), arr.push_back(mp(i,j));

	Set(dp,-1);

	int res = solve(0);

	if(res)
		cout<< "Karlsson" <<endl;
	else 
		cout<< "Lillebror" <<endl;

	return 0;
}
