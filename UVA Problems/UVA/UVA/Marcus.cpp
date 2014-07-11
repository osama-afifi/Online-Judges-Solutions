#include <iostream>
#include <string>
#include <queue>

using namespace std;
int m,n;
struct pos
{
	int x;
	int y;
	string dir;
};

bool range(int x , int y)
{
	if(x>=0 &&x<m && y>=0 && y<n)return true;
	return false;
}

int main()
{
	freopen("input.in","r",stdin);

	string target="IEHOVA#";
	int move_X[]={-1,1,0};
	int move_Y[]={0,0,-1};
	int t;
	cin>>t;
	while(t>0)
	{
		char MAP[10][10];
		cin>>m>>n;
		pos start,end;

		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			{
				cin>>MAP[i][j];
				if(MAP[i][j]=='@')
				{
					start.x=i;
					start.y=j;
				}

			}

			queue<pos> BFS;
			BFS.push(start);
		
			pos current;
			current=start;
			int c=0;

			while(!BFS.empty())
			{
	
					if(range(current.x-1,current.y)==true && MAP[current.x-1][current.y]==target[c] )	
					{

						pos temp={current.x-1,current.y,"forth"};
						BFS.push(temp);
						current=temp;
						c++;
						
					}
					else if(range(current.x,current.y+1)==true && MAP[current.x][current.y+1]==target[c] )	
					{

						pos temp={current.x,current.y+1,"right"};
						BFS.push(temp);
						current=temp;
						c++;
						
					}
					else if(range(current.x,current.y-1)==true && MAP[current.x][current.y-1]==tolower(target[c]) )	
					{

						pos temp={current.x,current.y-1,"left"};
						BFS.push(temp);
						current=temp;
						c++;
						
					}
				if(target[c-1]=='#')break;
			}

		BFS.pop();
		bool first =true;
		while(!BFS.empty())
			{
				if(!first)cout<<" ";
				cout<<BFS.front().dir;
				BFS.pop();
				first=false;
			}
			cout<<endl;
			t--;
	}
	return 0;
}