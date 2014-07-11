//# include <iostream>
//# include <cstring>
//# include <queue>
//# include <vector>
//# include <stdio.h>
//
//
//using namespace std;
//
//int mx[]={0,0,1,-1};
//int my[]={-1,1,0,0};
//
//struct pos
//{
//	int x,y;
//	bool G,B,R,Y;
//	int count;
//};
//int n ,m;
//
//bool inRange(int x , int y)
//{
//	return (x<n && y<m && x>=0 && y>=0);
//}
//
//bool vis[107][107][2][2][2][2];
//bool obst[107][107];
//
//
//char MAP[107][107];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(cin>>n>>m)
//	{
//		if(n==0 && m==0)break;
//		memset(vis,0  ,sizeof vis);
//		for(int i = 0 ; i< n ; i++)
//			for(int j = 0 ; j< m ; j++)
//				cin>>MAP[i][j];
//
//		int startx,starty;
//		for(int i = 0 ; i< n ; i++)
//			for(int j = 0 ; j< m ; j++)
//				if(MAP[i][j]=='*')
//				{
//					startx=i;
//					starty=j;			
//				}
//
//				queue <pos> BFS;
//
//				pos cur = {startx,starty,0,0,0,0,0};
//				BFS.push(cur);
//				bool found=false;;
//				while(!BFS.empty())
//				{
//					cur=BFS.front();
//
//					if(MAP[cur.x][cur.y]=='X')
//					{
//						found=1;
//						break;
//					}
//					BFS.pop();
//					
//					for(int i = 0 ; i< 4 ; i++)
//					{
//			
//						if(inRange(cur.x+mx[i],cur.y+my[i]) && !vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][cur.Y] && MAP[cur.x+mx[i]][cur.y+my[i]]!='#')
//						{
//
//							if(MAP[cur.x+mx[i]][cur.y+my[i]]=='b')
//							{
//								
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][1][cur.R][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,1,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);
//							}
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='g')
//							{
//						
//								vis[cur.x+mx[i]][cur.y+my[i]][1][cur.B][cur.R][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],1,cur.B,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);
//							}
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='y')
//							{
//							
//							vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][1]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,cur.R,1,cur.count+1};
//								BFS.push(temp);
//							}
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='r')
//							{
//							
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][1][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,1,cur.Y,cur.count+1};
//								BFS.push(temp);
//							}
//
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='B' && cur.B)
//							{	
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);
//							} 
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='G' && cur.G)
//							{	
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);
//							} 
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='Y' && cur.Y)
//							{	
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);
//							} 
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='R' && cur.R)
//							{	
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][cur.Y]=1;
//							pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);
//							} 
//							else if(MAP[cur.x+mx[i]][cur.y+my[i]]=='.' || MAP[cur.x+mx[i]][cur.y+my[i]]=='X' || MAP[cur.x+mx[i]][cur.y+my[i]]=='*')
//							{
//								vis[cur.x+mx[i]][cur.y+my[i]][cur.G][cur.B][cur.R][cur.Y]=1;
//								pos temp= {cur.x+mx[i],cur.y+my[i],cur.G,cur.B,cur.R,cur.Y,cur.count+1};
//								BFS.push(temp);							
//							}
//						}
//					}
//				}
//
//				if(!found)
//					puts("The poor student is trapped!");
//				else
//					printf("Escape possible in %d steps.\n",cur.count);
//	}
//
//	return 0;
//}