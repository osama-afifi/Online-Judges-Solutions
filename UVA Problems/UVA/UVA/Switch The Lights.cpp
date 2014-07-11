//#include <iostream>
//#include <iomanip>
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
//int oo=1<<25;
//vector< int >V;
//bool vis[1<<17];
//int G[107][107];
//int main()
//{
//	freopen("input.in","r",stdin);	
//
//	int t,n,m;
//	int kase=0;
//	scanf("%d", &t);
//	while(t--)
//	{
//
//		scanf("%d%d", &n, &m);
//		V.clear();
//		V.resize(m);
//		
//
//		FOR(i,0,m)
//		{
//			int x=0;
//			FOR(j,0,n)
//			{
//				int num;
//				scanf("%d", &G[i][j]);
//				if(G[i][j])
//					x |= (1<<j);
//			}
//			V[i]=x;
//		}
//		Set(vis,0);
//		pair<int,int>c;
//		queue< pair<int,int>  >Q;
//		
//		int target= (1<<n)-1;
//		Q.push(make_pair(target,0));
//		bool found=0;
//		while(!Q.empty())
//		{
//			c=Q.front();
//			Q.pop();
//			if(c.first==0)
//			{found=1;break;}
//
//			FOR(i,0,V.size())
//			{
//				if(!vis[c.first^V[i]])
//				{
//					Q.push(make_pair(c.first^V[i],c.second+1));
//					vis[c.first^V[i]]=1;
//				}
//			}
//		}
//
//		if(found)
//			printf("Case %d: %d\n", ++kase, c.second);
//		else
//			printf("Case %d: IMPOSSIBLE\n", ++kase);
//	}
//	return 0;
//}
