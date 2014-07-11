//#include <cstring>
//#include <queue>
//#include <stdio.h>
//
//
//using namespace std;
//
//struct point
//{
//	int x,y,counter;
//
//	point(int a , int b , int c) : x(a) , y(b) , counter(c)
//	{}
//	point()
//	{}
//};
//
//int r,c,m,n;
//bool vis[205][205];
//int movex[]={-1,0,1,0};
//int movey[]={0,1,0,-1};
//int xl,yl,xr,yr;
//bool inRange(int x , int y)
//{return (x>=1 && y>=1 && x<=r && y<=c);}
//int tempx,tempy;
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d%d",&r,&c)==2)
//	{
//		if(r==0 && c==0)break;
//		memset(vis,false,sizeof vis);
//
//		scanf("%d",&m);
//		int x,y,cost;
//		while(m--)
//		{
//			scanf("%d%d",&x,&y);
//			vis[x][y]=true;
//		}
//		scanf("%d",&n);
//
//		while(n--)
//		{
//			scanf("%d%d%d",&x,&y,&cost);
//			
//			xl=max(x-cost,1),yl=max(y-cost,1),xr=min(x+cost,r),yr=min(y+cost,c);
//			for(int i = xl ; i <=xr ; i++)
//				for(int j = yl ; j <= yr ; j++)
//					if((x-i)*(x-i)+(y-j)*(y-j)<=cost*cost)
//						vis[i][j]=true;
//		}
//
//		queue <point> BFS;
//
//		BFS.push(point(1,1,0));
//		point current;
//		bool found=false;
//		while(!BFS.empty())
//		{
//			current=BFS.front();
//
//			if(current.x==r && current.y==c)
//			{
//				found=true;
//				break;
//			}
//
//			BFS.pop();
////(x>=1 && y>=1 && x<=r && y<=c)
//			for(int i = 0 ; i<4 ; i++)
//			{
//				tempx=current.x+movex[i];
//				tempy=current.y+movey[i];
//				if( tempx>=1 && tempy>=1 && tempx<=r && tempy<=c && !vis[tempx][tempy] )
//				{
//					vis[tempx][tempy]=true;
//					BFS.push(point(tempx,tempy,current.counter+1));
//				}
//			}
//		}
//
//
//	if(found)
//		printf("%d\n",current.counter);
//
//	else
//		puts("Impossible.");
//
//
//}
//
//return 0;
//}