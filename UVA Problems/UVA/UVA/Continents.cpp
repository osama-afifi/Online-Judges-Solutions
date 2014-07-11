//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <stack>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int h,w;
//inline bool inRange(int x , int y)
//{
//	return !(x<0 || y<0 || x>=h || y>=w);
//}
//int maxi=0;
//char M[30][30];
//bool vis[30][30];
//int mx[]={0,0,1,-1};
//int my[]={-1,1,0,0};
//int c=0;
//int xx,yy;
//void dfs(int x , int y)
//{
//	vis[x][y]=1;
//	//if(!x && !y && !vis[h-1][w-1] && M[h-1][w-1]==M[xx][yy])
//	//	dfs(h-1,w-1),c++;
//	//if(x==h-1 && y==w-1 && !vis[0][0] && M[0][0]==M[xx][yy])
//	//	dfs(0,0),c++;
//
//	FOR(i,0,4)
//		if(inRange(x+mx[i],(y+my[i]+w)%w) && !vis[x+mx[i]][(y+my[i]+w)%w] && M[x+mx[i]][(y+my[i]+w)%w]==M[xx][yy])
//			dfs(x+mx[i],(y+my[i]+w)%w),c++;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d%d",&h,&w)==2)
//	{
//		FOR(i,0,h)
//			FOR(j,0,w)
//				cin>>M[i][j];
//		scanf("%d%d",&xx,&yy);
//		Set(vis,0);
//		dfs(xx,yy);
//		c=0;
//		maxi=0;
//		FOR(i,0,h)
//			FOR(j,0,w)
//			if(M[i][j]==M[xx][yy] && !vis[i][j])
//			{
//				c=1;
//				dfs(i,j);
//				if(c>maxi)
//					maxi=c;
//			}
//			printf("%d\n",maxi)	;
//	}
//	return 0;
//}
