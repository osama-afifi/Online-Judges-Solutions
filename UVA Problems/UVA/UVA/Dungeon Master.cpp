#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

struct POS
{
	int x,y,z,counter;
};
int moves_X[]={-1,1,0,0,0,0};
int moves_Y[]={0,0,-1,1,0,0};
int moves_Z[]={0,0,0,0,-1,1};

int main ()
{
	freopen("input.in","r",stdin);
	int L,R,C;



	while(cin>>L>>R>>C)
	{
		if(L==0 && R==0 && C==0)break;
		bool visited[31][31][31]={false};	

		char ch;
		POS start ,exit;
		for(int i=0;i<L;i++)
			for(int j=0;j<R;j++)
				for(int k=0;k<C;k++)
				{

					cin>>ch;

					if(ch=='#')
						visited[i][j][k]=true;
					else if(ch=='S'){
						start.x=i;
						start.y=j;
						start.z=k;
						start.counter=0;
					}
					else if(ch=='E'){
						exit.x=i;
						exit.y=j;
						exit.z=k;
						exit.counter=0;
					}
				}


				queue <POS> BFS;
				BFS.push(start);
				bool found=false;
				visited[start.x][start.y][start.z]=true;
				POS current;
				while(!BFS.empty())
				{

					current=BFS.front();
					if(current.x==exit.x && current.y==exit.y && current.z==exit.z )
					{
						found=true;
						break;				
					}
					BFS.pop();
					for(int i=0;i<6;i++)
					{
						if(current.x+moves_X[i]>=0 && current.x+moves_X[i] <L &&current.y+moves_Y[i]>=0 && current.y+moves_Y[i] <R &&current.z+moves_Z[i]>=0 && current.z+moves_Z[i] <C )
						{
							if(!visited[current.x+moves_X[i]][current.y+moves_Y[i]][current.z+moves_Z[i]])
							{
								POS temp={current.x+moves_X[i],current.y+moves_Y[i],current.z+moves_Z[i],current.counter+1};
								BFS.push(temp);
								visited[current.x+moves_X[i]][current.y+moves_Y[i]][current.z+moves_Z[i]]=true;
							}
						}
					}
				}

				if(found)
					cout<<"Escaped in "<<current.counter<<" minute(s)."<<endl;
				else
					cout<<"Trapped!"<<endl;
	}
	return 0;
}