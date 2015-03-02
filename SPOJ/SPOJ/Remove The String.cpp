#include<iostream> 
#include<string> 
#include<map> 
#include<vector> 
#include<queue> 
#include<stack> 
#include<set> 
#include<algorithm> 
#include<sstream> 
#include<limits.h> 
#include<iomanip> 
#include<cstring> 
#include<bitset> 
#include<fstream> 
#include<cmath> 
#include<cassert> 
#include <stdio.h> 
#include<ctype.h>

using namespace std;
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define mp make_pair  
int const oo = 1<<25;

int f[1009];
char txt[10009];
char pat[1009];
int d[10009][1009];
int part[1009][30];
__inline int partial(int i , char c)
{
	while(i && pat[i]!=c)
	{
		i =	pat[i-1];
	}
	if(pat[i]==c)
		++i;
	return i;
}

inline void genFail()
{
	int len = strlen(pat);
	int i=1,j=0;
	f[0]=0;
	while(i<len)
	{
		if(pat[i]==pat[j])
			++j,f[i]=j,++i;  
		else if(j>0)
			j=f[j-1];
		else
			f[i]=0,++i;   
	}
}


// recursive solution will TLE
//int solve(int i , int j)
//{
//	if(!txt[i])
//		return (pat[j]>0) ? 0 :  1<<25;
//	if(!pat[j])
//		return 1<<25;
//	if(d[i][j]!=-1)
//		return d[i][j];
//	int s1 = solve(i+1 , j) +1;
//	int s2 = solve(i+1 , partial(j , txt[i]));
//	return d[i][j] = min(s1,s2);
//}



int main()
{
	freopen("input.in","r",stdin);

	while(scanf("%s%s" , txt , pat)==2)
	{
		genFail();
		int n = strlen(txt);
		int m = strlen(pat);
		int i,j;
		for(char c = 'a' ; c<='z' ; ++c)
			for(j = 0 ; j<m ; j++)
				part[j][c-'a']=partial(j , c);

		for(i = n ; i>=0 ; i--)
			d[i][m] = 1<<25;

		for(j = m-1 ; j>=0 ; j--)
			d[n][j] = 0;
		for(i = n-1 ; i>=0 ; i--)
			for(j = m-1 ; j>=0 ; j--)	
				d[i][j] = min( d[i+1][j]+1, d[i+1][part[j][txt[i]-'a']] );

		printf("%d\n",d[0][0]);
	}
	return 0;
}