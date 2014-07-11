
#include <stdio.h>
#include <cstring>

using namespace std;

bool isPrime(int n)
{
	for(int i = 2 ; i <= (n/2)+1 ; i++)
		if(n%i==0)return false;

	return true;
}

bool prime[40];
int sol[40],N,kase=0;
bool vis[40];
bool ret;
void solve(int index)
{

	if(index<N)
	{
		for( sol[index]=2 ; sol[index]<=N ; sol[index]++)
		{
			if(!vis[sol[index]] && prime[sol[index]+sol[index-1]] && ( index<N-1  || (index==N-1 && prime[sol[index]+1]) ) ) 
			{
				vis[sol[index]]=true;
				solve(index+1);	
				vis[sol[index]]=false;
			}

		}
	}
	else
	{
		for(int i = 0 ; i<N-1 ; i++)
			printf("%d ",sol[i]);
		printf("%d\n",sol[N-1]);

	}
}


int main()
{
	freopen("input.in","r",stdin);
	for(int i = 1 ; i<=32 ; i++)
		if(isPrime(i))
			prime[i]=true;
		else prime[i]=false;

		sol[0]=1;
		bool first=true;
		while(scanf("%d",&N) != EOF)
		{
if(!first)printf("\n");
			memset(vis,false,sizeof(vis));
			
			printf("Case %d:\n",++kase);
			solve(1);
	
	first=false;		
		}
		
		return 0;
}