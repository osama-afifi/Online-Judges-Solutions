#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>


using namespace std;

struct POS
{
	int x, y ,counter;
}start,current;


int fire[1001][1001];
bool VIS[1001][1001];
bool firevis[1001][1001];
char MAP[1001][1001];

char ch;
int m,n;

int movex[]={-1,0,1,0};
int movey[]={0,-1,0,1};

bool inRange(int x , int y)
{
	if (x>=0 &&y>=0 && x<m && y<n) return true ;
	return false;
}

bool out(int x , int y)
{
	for(int i=0;i<4;i++)
		if(!inRange( x+movex[i] , y+movey[i] ))
			return true;
	return false;
}


void setfire()
{
	queue <POS> BFS;
	for(int i=0 ; i<m ; i++)
		for(int j=0 ; j<n ; j++)
		{
			if(MAP[i][j]=='F')
			{
				POS temp = {i,j,0};
				BFS.push(temp);
			}
		}
			memset(firevis,false,sizeof(firevis));
		while(!BFS.empty())
		{
			current=BFS.front();
			if(fire[current.x][current.y]>current.counter)
				fire[current.x][current.y]=current.counter;

			BFS.pop();

			for(int i=0 ; i<4 ; i++)
			{
				if(inRange( current.x+movex[i] , current.y+movey[i] ) && !VIS[current.x+movex[i]][current.y+movey[i]] && !firevis[current.x+movex[i]][current.y+movey[i]] )
				{
					firevis[current.x+movex[i]][current.y+movey[i]]=true;
					POS temp = {current.x+movex[i],current.y+movey[i], current.counter+1};
					BFS.push(temp);
				}
			}
		}

}

int main()
{
	freopen("input.in","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		cin>>m>>n;
		/*cin.ignore();*/
		memset(VIS,false,sizeof(VIS));
		memset(fire,10000,sizeof(fire));

		for(int i=0 ; i<m ; i++)
			for(int j=0 ; j<n ; j++)
			{
			cin>>MAP[i][j];

				switch(MAP[i][j])
				{
				case '#':
					VIS[i][j]=true;
					break;
				case 'F':
					VIS[i][j]=true;
					fire[i][j]=-1;
					memset(firevis,false,sizeof(firevis));
					break;
				case 'J':
					start.x=i;
					start.y=j;
					start.counter=0;
					break;
				default:
					break;
				}
			}
			setfire();
			queue <POS> BFS;
			BFS.push(start);
			bool found=false;

			while(!BFS.empty())
			{
				current=BFS.front();



				BFS.pop();

				for(int i=0 ; i<4 ; i++)
				{
					if(inRange(current.x+movex[i],current.y+movey[i]))
					{
						if(!VIS[current.x+movex[i]][current.y+movey[i]] && fire[current.x+movex[i]][current.y+movey[i]]-current.counter>1)
						{
							VIS[current.x+movex[i]][current.y+movey[i]]=true;
							POS temp = {current.x+movex[i],current.y+movey[i], current.counter+1};
							BFS.push(temp);
						}
					}
					else
					{
						current.counter++;
						found = true;
						break;
					}

				}
				if(found)break;
			}

			if(found)
				printf("%d\n",current.counter);
			else
				printf("IMPOSSIBLE\n");

	}
	return 0;
}