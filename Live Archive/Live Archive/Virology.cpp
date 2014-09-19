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
int dp[1<<15][5][1];

bool solve(int count, int mask, int t_s, int pr )
{
	if(t_s>4 || pr>1) return 0;
	if(count==14)
		return (t_s==4 && pr==1);
	bool res = 0;
	if(dp[mask][t_s][pr]!=-1)
		return dp[mask][t_s][pr];

	//triple check
	int c=0;
	int tempMask;
	FOR(i,0,14)
		if(!(mask & (1<<i)))
		{
			c=0;
			tempMask = mask | (1<<i);
			FOR(j,0,14)
				if(j!=i && !(tempMask & (1<<j)))
				{

					if(arr[i]==arr[j])
					{
						tempMask = tempMask | (1<<j);
						++c;
					}
					if(c==2)
					{
						res |= solve(count+3,tempMask,t_s+1,pr);
						break;
					}
				}
		}
		//straight check

		FOR(i,0,14)
			if(!(mask & (1<<i)))
			{
				c=0;
				tempMask = mask | (1<<i);
				FOR(j,0,14)
					if(j!=i && !(tempMask & (1<<j)))
					{

						if(arr[i]+c+1==arr[j])
						{
							tempMask = tempMask | (1<<j);
							++c;
						}
						if(c==2)
						{
							res |= solve(count+3,tempMask,t_s+1,pr);
							break;
						}
					}
			}
			//pair check

			FOR(i,0,14)
				if(!(mask & (1<<i)))
				{
					c=0;
					tempMask = mask | (1<<i);
					FOR(j,0,14)
						if(j!=i && !(tempMask & (1<<j)))
						{

							if(arr[i]==arr[j])
							{
								tempMask = tempMask | (1<<j);
								++c;
							}
							if(c==1)
							{
								res |= solve(count+2,tempMask,t_s,pr+1);
								break;
							}
						}
				}
				return dp[mask][t_s][pr] = res;
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
			cout << "Vulnerable" <<endl;
		else
			cout << "Immune" <<endl;
	}

	return 0;
}