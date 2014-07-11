#include <queue>
#include <stdio.h>
#include <cstring>

using namespace std;

struct POS
{
	int x,y,counter;
	POS()
	{}
	POS(int a, int b , int c) : x(a), y(b), counter(c)
	{}
};

POS current;
bool  bara,found;

int m,n,ccc,len;
int moves_X[]={-1,0,1,0};
int moves_Y[]={0,1,0,-1};
bool VIS[501][501][4][4];
bool board[501][501][4];
int main ()
{
	int index;
	char text[5];
	freopen("input.in","r",stdin);


	while(scanf("%d%d",&m,&n) == 2 )
	{
		memset(VIS,false,sizeof(VIS));

		bara=false;
		for( int i=0;i<m;i++){
			for( int j=0;j<n ;j++)
			{
				if(i==m-1 && j==n-1){
					bara=true;
					break;
				}

				board[i][j][0]=false;
				board[i][j][1]=false;
				board[i][j][2]=false;
				board[i][j][3]=false;

				scanf("%s",&text);

				size_t len = strlen(text);
				for( int k=0;k<len;k++)
				{
					switch (text[k])
					{
					case 'N':
						board[i][j][0]=true;
						break;
					case 'E':
						board[i][j][1]=true;
						break;
					case 'S':
						board[i][j][2]=true;
						break;
					case 'W':
						board[i][j][3]=true;
						break;
					}

				}

			}
			if(bara)break;
		}


		queue <POS> BFS;
		BFS.push(POS(0,0,0));

		found=false;

		while( !BFS.empty() )
		{
			current= BFS.front();

			if(current.x== m-1 && current.y == n-1)
			{
				found = true;
				break;
			}

			if(current.counter>m*n*4)break;

			BFS.pop();

			for( int i=0;i<4;i++)
			{
				index=(i+current.counter)%4; //dir
	
				if(board[current.x][current.y][i] && !VIS[current.x][current.y][current.counter%4][index] && current.x+moves_X[index]>=0 && current.x+moves_X[index]<m  && current.y+moves_Y[index]>=0 && current.y+moves_Y[index]<n )
				{
					VIS[current.x][current.y][current.counter%4][index]=true;
					BFS.push(POS(current.x+moves_X[index],current.y+moves_Y[index],current.counter+1));
				}

			}				
		} 

		if(found)
			printf("%d\n",current.counter);
		else
			puts("no path to exit");




	}
	return 0;
}