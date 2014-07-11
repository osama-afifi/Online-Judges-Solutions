#include <iostream>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

int MAP[1000][1000];
bool VIS[1000][1000];
int m ,n ;
int mini;

int movex[]={1,-1,0,0};
int movey[]={0,0,-1,1};

struct POS
{
	int x,y,sum;

		bool operator <(const POS &a) const
	{

		return sum>a.sum;
		
	}
};

POS start = {0,0,0};

bool inRange(int x , int y)
{
	return(x>=0 && y>=0 && x<m && y <n) ? true : false;
}


int main()
{
	freopen("input.in","r",stdin);

	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(VIS,false,sizeof(VIS));
		mini=2147483647;
		scanf("%d%d", &m, &n);
		for(int i=0 ; i<m ;i++)
			for(int j=0 ; j<n ;j++)
				scanf("%d",&MAP[i][j]);
		

		priority_queue <POS> BFS;

		BFS.push(start);
		
		////
		POS current;
		while(!BFS.empty())
		{
			
			current=BFS.top();
		
			
			if(current.x==m-1 && current.y==n-1 )break;
			BFS.pop();
		
			for(int i=0;i<4;i++)
			{
				if(inRange(current.x+movex[i],current.y+movey[i]) && !VIS[current.x+movex[i]][current.y+movey[i]] )
				{
					VIS[current.x+movex[i]][current.y+movey[i]]=true;
					POS temp = { current.x+movex[i],current.y+movey[i] , current.sum+MAP[current.x+movex[i]][current.y+movey[i]] };
					BFS.push(temp);				
	
				}
			}

		}


		printf("%d\n",current.sum+MAP[0][0]);

	}

	return 0;
}
