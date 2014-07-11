//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <iomanip>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//struct point 
//{
//	int x,y,dir,counter;
//
//	point()
//	{}
//
//	point(int a , int b ,int d, int c) : x(a) , y(b) ,dir(d) , counter(c)
//	{}
//
//	bool operator <(const point &a) const
//	{
//
//		return counter>a.counter;
//
//	}
//};
//
//pair<int,int>s;
//pair<int,int>t;
//int w,h;
//char MAP[105][105];
//int cost[107][107][4];
//int movex[]={-1,0,1,0};
//int movey[]={0,1,0,-1};
//int const oo=200000000;
//
//bool inRange(int a , int b)
//{
//	return (a>=0 && b>=0 && a<h && b<w);
//}
//int dijkstra()
//{
//
//
//	priority_queue <point> Q;
//
//	for(int k= 0 ; k<4 ;k++){
//		Q.push(point(s.first,s.second,k,0));
//		cost[s.first][s.second][k]=0;
//	}
//
//	point current;
//
//	while(!Q.empty())
//	{
//		current=Q.top();
//		if(current.x==t.first && current.y==t.second)
//			return current.counter;
//		Q.pop();
//
//		for(int i= 0 ; i<4 ;i++){
//			int cdir= (abs(i-current.dir)%2);
//			int xx=current.x+movex[i],yy=current.y+movey[i];
//			if (inRange(xx,yy) && MAP[xx][yy]!='*')
//			{				
//				if (cost[xx][yy][i]>current.counter+cdir)
//				{
//					cost[xx][yy][i]=current.counter+cdir;
//						Q.push(point(xx,yy,i,current.counter+cdir));
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	while(scanf("%d%d",&w,&h)==2)
//	{
//		for(int i=0 ; i<h ;i++)
//			for(int j=0 ; j<w ;j++)
//			{
//				cin>>MAP[i][j];
//				for(int k=0 ; k <4 ; k++)
//					cost[i][j][k]=oo;
//			}
//			int count=0;
//			for(int i=0 ; i<h ;i++)
//				for(int j=0 ; j<w ;j++)
//					if(MAP[i][j]=='C' &&!count)
//					{
//						count++;
//						s.first=i,s.second=j;
//					}
//					else if(MAP[i][j]=='C' &&count)
//						t.first=i,t.second=j;
//
//			int res=dijkstra();
//			cout<<res<<endl;
//
//	}
//	return 0;
//}