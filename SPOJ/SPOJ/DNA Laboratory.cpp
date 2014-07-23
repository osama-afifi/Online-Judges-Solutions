//#include<iostream> 
//#include<string> 
//#include<map> 
//#include<vector> 
//#include<queue> 
//#include<stack> 
//#include<set> 
//#include<algorithm> 
//#include<sstream> 
//#include<limits.h> 
//#include<iomanip> 
//#include<cstring> 
//#include<bitset> 
//#include<fstream> 
//#include<cmath> 
//#include<cassert> 
//#include <stdio.h> 
//#include<ctype.h>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair  
//int const oo = 1<<25;
//
//const int MAX = 16;
//int n;
//int d[MAX][1<<MAX];
//int path[MAX][1<<MAX];
//int G[MAX][MAX];
//vector<string>s;
//int target;
//
//inline int f(string  &from , string &to)
//{
//	int l1 = from.length();
//	int l2 = to.length();
//	int b=  0 , e = l1-1 , mid;
//	int res = l1;
//	while(b<=e)
//	{
//		mid = (b+e)/2;
//		if(from.substr(mid) == to.substr(0,l1-mid))
//			res = mid , e = mid-1;
//		else b = mid+1;
//	}
//	return l2-(l1-res);
//
//}
//
//int solve(int node , int mask)
//{
//	if(mask == target)
//		return 0;
//	if(d[node][mask]!=-1)
//		return d[node][mask];
//
//	int mini  = 1<<25;
//	int indi = 0;
//	FOR(i,0,n)
//		if(node!=i && !(mask & (1<<i)) )
//		{
//			int sol  = solve(i,mask | 1<<i) +G[node][i];
//			if(sol<mini)
//				mini = sol , indi = i;
//		}
//		return d[node][mask] = mini;
//}
//
//
//void print(int node , int mask)
//{
//	if(mask == target)return;
//	int indi = -1;
//	int mini = 1<<25;
//	FOR(i,0,n)
//		if(node!=i && !(mask & (1<<i)) )
//		{
//			int sol  = solve(i,mask | 1<<i) + G[node][i];
//			if(sol<mini)
//				mini = sol , indi = i;
//			else if(sol==mini && s[i].substr(s[i].length()-G[node][i])<s[indi].substr(s[indi].length()-G[node][indi]) )
//				mini = sol , indi = i;
//		}
//		cout<< s[indi].substr(s[indi].length()-G[node][indi]);
//		print(indi , mask | (1<<indi ) );
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase = 0;
//	scanf("%d",&t);
//	while(t--) 
//	{
//		s.clear();
//		scanf("%d",&n);
//		Set(d,-1);
//		string temp;
//		FOR(i,0,n)
//		{
//			bool b = 0;
//			cin>>temp;
//			if(!b)
//			s.push_back(temp);
//		}
//		n = s.size();
//		sort(s.begin(),s.end());
//		FOR(i,0,n)
//			FOR(j,0,n)
//			if(i!=j)
//				G[i][j] = f(s[i],s[j]);
//		target = (1<<(n))-1;
//
//		int mini = 1<<25;
//		int indi = 0;
//
//		FOR(i,0,n)
//		{
//			int x = solve(i, 1<<i) + s[i].length();
//			if(x<mini)
//				mini=x , indi = i;
//		}
//		printf("Scenario #%d:\n",++kase);
//		cout<<s[indi];
//		print(indi , 1<<indi);
//		printf("\n\n");
//
//	}
//}
