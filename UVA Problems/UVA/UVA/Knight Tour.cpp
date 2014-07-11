//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cstring>
//#include <queue>
//#include <math.h>
//#include <stdio.h>
//
//int n,k;
//using namespace std;
//
//struct point 
//{
//	int x,y,c;
//	point()
//	{}
//	point(int a, int b , int cc) : x(a)  , y(b), c(cc)
//	{}
//};
//
//int mx[]={1,1,-1,-1,2,2,-2,-2};
//int my[]={2,-2,-2,2,1,-1,-1,1};
//
//bool inRange(int x , int y)
//{return (x>=0 &&y>=0 && x<1001 && y <1001);}
//int bfs[1007][1007];
//bool vis[1007][1007];
//pair<int,int> p[25];
//int dp[1007][1<<16];
//int dist[25][25];
//int limit;
//int const oo = 1<<25;
//// {{{ FAST integer input
//#define X10(n) ((n << 3) + (n << 1))
//const int MAXR = 65536;
//char buf[MAXR], *lim = buf + MAXR - 1, *nw = lim + 1;
//
//using namespace std;
//bool adapt()
//{ // Returns true if there is a number waiting to be read, false otherwise
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	if(nw > lim){
//		int r = fread(buf, 1, MAXR-1, stdin);
//		buf[r] = 0;
//		lim = buf + r - 1;
//		if(r == MAXR - 1){
//			while(isdigit(*lim)) ungetc(*lim--, stdin);
//			if(*lim == '-') ungetc(*lim--, stdin);
//		}
//		nw = buf;
//	}
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	return nw <= lim;
//}
//
//bool readint(int& n){ // Returns true on success, false on failure
//	if(!adapt()) return false;
//	bool ngtv = *(nw - 1) == '-';
//	for(n = 0; isdigit(*nw); n = X10(n) + *nw++ - '0');
//	if(ngtv) n = -n;
//	return true;
//}
//// end FAST integer input
///////////////////////////////////////////////////////////////////////////////
//
//
//int tsp(int node , int vis)
//{
//	if(vis==limit)
//		return dist[node][0];
//	if(dp[node][vis]!=-1)
//		return dp[node][vis];
//	dp[node][vis]=oo;
//	for(int i = 0 ; i < k ; i++)
//		if(i!=node && (!(vis & (1<<i))))
//			dp[node][vis]=min(dp[node][vis],tsp(i,(vis | 1<<i))+dist[node][i]);
//
//	return dp[node][vis];
//}
//
//int check(int x1, int y1, int x2, int y2)
//{
//	if(x1==1 && y1==1 && x2==2 && y2==2)
//		return 2;
//	if(x1==2 && y1==2 && x2==1 && y2==1)
//		return 2;
//
//	if(x1==n && y1==n && x2==n-1 && y2==n-1)
//		return 2;
//	if(x1==n-1 && y1==n-1 && x2==n && y2==n)
//		return 2;
//
//
//	if(x1==n && y1==1 && x2==n-1 && y2==2)
//		return 2;
//	if(x1==n-1 && y1==2 && x2==n && y2==1)
//		return 2;
//
//	if(x1==1 && y1==n && x2==2 && y2==n-1)
//		return 2;
//	if(x1==2 && y1==n-1 && x2==1 && y2==n)
//		return 2;
//
//	return 0;
//}
//
//
//
//int steps(int x1, int y1, int x2, int y2)
//{
//  int diffx=abs(x2-x1);
//  int diffy=abs(y2-y1);
//  int maxi=(diffx+1)/2;
//  maxi=((diffy+1)/2)>maxi ? ((diffy+1)/2) : maxi ;
//  maxi=((diffx+diffy+2)/3)>maxi ? ((diffx+diffy+2)/3) : maxi ;
//  while ((maxi%2)!=(diffx+diffy)%2) maxi++;
//  if (abs(diffx)==1 && diffy==0) return 3;
//  if (abs(diffy)==1 && diffx==0) return 3;
//  if (abs(diffx)==2 && abs(diffy)==2) return 4;
//  return maxi;
//}
//int main()
//{
//	memset(vis,0,sizeof(vis));
//	queue <point> Q;
//	Q.push(point(0,0,0));
//	bfs[0][0]=0;
//	vis[0][0]=1;
//
//	while(!Q.empty())
//	{
//		point c=Q.front();
//		Q.pop();
//
//		for(int i = 0 ; i<8 ; i++)
//			if( inRange(c.x+mx[i],c.y+my[i]) && !vis[c.x+mx[i]][c.y+my[i]])
//			{
//				vis[c.x+mx[i]][c.y+my[i]]=1;
//				Q.push(point(c.x+mx[i],c.y+my[i],c.c+1));
//				bfs[c.x+mx[i]][c.y+my[i]]=c.c+1;
//			}
//	}
//
//	freopen("input.in","r",stdin);
//
//	int t,kase=0;
//	//scanf("%d",&t);
//	readint(t);
//	while(t--)
//	{
//		//scanf("%d%d",&n,&k);
//		readint(n);
//		readint(k);
//		for(int i = 0 ; i < k ; i++)
//			for(int j = 0 ; j < (1<<k) ; j++)
//				dp[i][j]=-1;
//		
//
//		int xx,yy;
//
//		for(int i = 0 ; i < k ; i++)
//		{
//			readint(p[i].first);
//			readint(p[i].second);
//			//scanf("%d%d",&p[i].first,&p[i].second);
//			//p[i].first--;
//			//p[i].second--;
//		}
//		for(int i = 0 ; i < k ; i++)
//			for(int j = 0 ; j < k ; j++)
//			{
//				
//				//int xx=abs(p[i].first-p[j].first)/*+1*/;
//				//int yy=abs(p[i].second-p[j].second)/*+1*/;
//			//	dist[i][j]=bfs[xx][yy]+check(p[i].first,p[i].second,p[j].first,p[j].second);		
//				dist[i][j]=steps(p[i].first,p[i].second,p[j].first,p[j].second)+check(p[i].first,p[i].second,p[j].first,p[j].second);
//				
//				
//			}
//
//			limit=(1<<k)-1;
//
//			printf("Case %d: %d\n",++kase,tsp(0,1));
//	}
//
//	return 0;
//}