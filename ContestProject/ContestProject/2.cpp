#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

#define FOR(i,a,b) for(int i=a ; i<b ; i++)
#define Set(a,v) memset(a,v,sizeof(a))
#define mp make_pair

int arr[25];
int dp[20][5][5][5];

bool solve(int idx , int t, int s, int pr)
{
	if(t+s>4 || pr>1) return 0;
	if(idx==14)
		return (t+s>=4 && pr>=1);
	bool res = 0;
	if(dp[idx][t][s][pr]!=-1)
		return dp[idx][t][s][pr];

	//triple check
	int c=0;
	FOR(i,idx,idx+3)
	{
		if(arr[idx]==arr[i])++c;
		if(c==3)
			res |= solve(i+1,t+1,s,pr);
	}
	//straight check
	c=0;
	FOR(i,idx,idx+3)
	{
		if(arr[idx]+(i-idx)==arr[i])++c;
		if(c==3)
			res |= solve(i+1,t,s+1,pr);
	}
	//pair check
	c=0;
	FOR(i,idx,idx+2)
	{
		if(arr[idx]==arr[i])++c;
		if(c==2)
			res |= solve(i+1,t,s,pr+1);
	}
	return dp[idx][t][s][pr] = res;
}

int main()
{
	freopen("input.in","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		Set(dp,-1);
		FOR(i,0,14)
			cin>>arr[i];
		sort(arr,arr+14);

		bool b = solve(0,0,0,0);
		if(b)
		{
			int c=0;
			FOR(i,1,14)
			{
				if(arr[i-1]==arr[i])
					++c;
				else c=0;
				if(c>3){b=0;break;}
			}
					FOR(i,0,14)
					if(arr[i]<0 || arr[i]>9)
						b=0;
		}
		if(b)
			cout << "Vulnerable"<<endl;
		else
			cout << "Immune"<<endl;
	}

	return 0;
}