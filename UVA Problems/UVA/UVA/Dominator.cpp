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
//
//bool G[107][107];
//vector< vector<int> >V;
//int n;
//bool ans[109][109];
//int v[109];
//int laaaaaaaaaaa2=0;
//
//
//
//bool dfs(int node , int & target)
//{
//	if(node==laaaaaaaaaaa2)return false;
//	if(node==target)return true;	
//	bool f=0;
//	FOR(i,0,V[node].size())
//		if(!v[V[node][i]])
//		{
//			v[V[node][i]]=1;
//			f|=dfs(V[node][i],target);
//		}
//		return f;
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	int kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//		V.clear();
//		scanf("%d",&n);
//		V.resize(n);
//		bool b=0;
//
//		FOR(i,0,n)
//			FOR(j,0,n)
//		{
//			scanf("%d",&G[i][j]);
//			if(G[i][j])
//				V[i].push_back(j);
//		}	
//
//		Set(ans,0);
//		FOR(i,0,n)
//		{
//			Set(v,0);
//			laaaaaaaaaaa2=-1;
//			if(dfs(0,i))
//			{
//				//ans[0][i]=ans[i][i]=1;
//				FOR(j,0,n)
//				{
//					laaaaaaaaaaa2=j;
//					Set(v,0);
//					bool r=dfs(0,i);
//					if(!r)
//						ans[j][i]=1;
//				}
//			}
//
//		}
//
//		printf("Case %d:\n",++kase);
//		string p;
//		p.append(1,'+');
//		p.append(2*n-1,'-');
//		p.append(1,'+');
//
//		cout<<p<<endl;
//		FOR(i,0,n)
//		{
//			FOR(j,0,n)
//			{
//				putchar('|');
//				(ans[i][j]) ? putchar('Y') : putchar('N');
//			}
//			puts("|");
//			cout<<p<<endl;
//		}
//
//	}
//	return 0;
//}
