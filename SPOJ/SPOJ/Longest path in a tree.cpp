////
////
////#include<iostream>
////#include<iomanip>
////#include<string>
////#include<cstring>
////#include<stdio.h>
////#include<algorithm>
////#include<vector>
////#include<map>
////#include<queue>
////#include<stack>
////#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
////#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
////#define Set(a, s) memset(a, s, sizeof (a))
////using namespace std;
////
////string text;
////int t,n;
////int oo =1<<25;
////
////vector< vector<int> >V;
////
////int dp[10009];
////int freq[10009];
////bool vis[10009];
////
////int dfs(int node)
////{
////	int maxi=0;
////	for(int i = 0 ; i<V[node].size()  ; i++)
////		if(!vis[node])
////		{
////			vis[node]=1;
////			maxi=max(maxi,dfs(V[i])+1);
////			vis[node]=0;
////		}
////		return maxi;
////}
////
////
////int main()
////{
////	freopen("input.in","r",stdin);
////	int a,b,c,d;
////
////	int n;
////	while(scanf("%d",&n)==1)
////	{
////		V.clear();
////		V.resize(n);
////		Set(dp,-oo);
////		Set(freq,0);
////		Set(vis,0);
////		int start=oo;
////		int mini=oo;
////		FOR(i,0,n-1)
////		{
////			int a,b;
////			scanf("%d%d",&a,&b);
////			a--;b--;
////			freq[a]++;
////			freq[b]++;
////
////			V[a].push_back(b);
////			V[b].push_back(a);
////		}
////		FOR(i,0,n)
////			if(freq[i]<mini)
////			{mini=freq[i];start=i;}
////
////			int maxi=0;
////			/*FOR(i,0,n)
////			if(freq[i]==freq[start])*/
////			vis[start]=1;
////			maxi=max(maxi,dfs(start));
////
////			printf("%d\n",maxi);
////
////
////
////
////	}
////	return 0;
////}
//
//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//string text;
//int t,n;
//int oo =1<<25;
//
//vector< vector<int> >V;
//
//bool vis[10009];
////int dp[10009];
//int d[10009];
//int freq[10009];
//
//
//void dfs(int node , int index)
//{
//	d[node]=index;
//	FOR(i,0,V[node].size())
//		if(!vis[V[node][i]])
//		{vis[V[node][i]]=1;dfs(V[node][i],index+1);}
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	//int a,b,c,d;
//
//	int n;
//	while(scanf("%d",&n)==1)
//	{
//		V.clear();
//		V.resize(n);
//		//FOR(i,0,n)
//		//	dp[i]=0;
//		//Set(freq,0);
//		int start=0;
//		int maxi=-oo;
//		FOR(i,0,n-1)
//		{
//			int a,b;
//			scanf("%d%d",&a,&b);
//			a--;b--;
//			freq[a]++;
//			freq[b]++;
//			V[a].push_back(b);
//			V[b].push_back(a);
//		}
//
//		Set(vis,0);
//		dfs(0,0);
//		FOR(i,0,n)
//			if(d[start]<d[i])
//				start=i;
//		Set(vis,0);
//		dfs(start,0);
//		FOR(i,0,n)
//			if(d[start]<d[i])
//				start=i;
//
//		printf("%d\n",d[start]);
//	}
//	return 0;
//}
