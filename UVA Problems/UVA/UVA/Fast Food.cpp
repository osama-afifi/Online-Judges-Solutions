//
//#include <iostream>
//#include <map>
//#include <cstdio>
//#include <queue>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long 
//#define pii pair<int,int>
//#define pll pair<LL,LL>
//#define mp make_pair
//
////6 3
////5 6 12 19 20 27
////0 0
//
//int arr[209];
//int cum[209];
//int dp[209][31];
//int n;
//
//int range(int b , int e)
//{
//	if(b<0 || e==n)return 0;
//	if(b==0) return cum[e];
//	return cum[e]-cum[b-1];
//}
//int solve(int idx , int k)
//{
//	if(k<0)return 1<<25;
//	if(idx == n)
//		return 0;
//	if(dp[idx][k]!=-1)
//		return dp[idx][k];
//	int mini = 1<<25;
//	FOR(i, idx , n)
//	{
//		int sum = 0;
//		int mn = 1<<25;
//		FOR(j,idx,i+1)
//		{
//			int left = (j==idx) ? 0 : ((j-idx)*arr[j]) - range(idx , j-1);
//			int right = (j==i) ? 0 :   range(j+1 , i) - ((i-j)*arr[j]);
//			sum = left + right;
//			mn = min(mn,sum);
//			
//		}
//		mini = min (mini ,solve(i+1,k-1)+mn);
//	}
//	return dp[idx][k] = mini;
//}
//
//vector< pair<int, pair<int,int> > >sol;
//
//void print(int idx , int k)
//{
//	if(k<0)return;
//	if(idx == n)
//	{
//		return;	
//	}
//	int opt = solve(idx,k);
//	FOR(i, idx , n)
//	{
//		int sum = 0;
//		int mn = 1<<25;
//		int x = 0;
//		FOR(j,idx,i+1)
//		{
//			int left = (j==idx) ? 0 : ((j-idx)*arr[j]) - range(idx , j-1);
//			int right = (j==i) ? 0 :   range(j+1 , i) - ((i-j)*arr[j]);
//			sum = left + right;
//			if(sum<mn)
//				mn = sum , x = j;
//
//		}
//			if(solve(i+1,k-1)+mn == opt)
//			{
//				sol.push_back(mp(x,mp(idx,i)));
//				print(i+1,k-1);
//				return;
//			}
//	}
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int k;
//	int kase = 0;
//	while(cin>>n>>k)
//	{
//		if(n==0 && k==0)break;
//		Set(dp,-1);
//		FOR(i,0,n)
//			cin>>arr[i];
//		cum[0] = arr[0];
//		FOR(i,1,n)
//			cum[i] = cum[i-1] + arr[i];
//		int res = solve(0,k);
//		sol.clear();
//		print(0,k);
//		cout << "Chain " << ++kase <<endl;
//		FOR(i,0,sol.size())
//		{
//			cout << "Depot "<< i+1 <<" at restaurant "<< sol[i].first+1;
//			if(sol[i].second.first  != sol[i].second.second) 
//			{
//				cout<<" serves restaurants "<< sol[i].second.first+1 ;
//				cout << " to " << sol[i].second.second+1;
//			}
//			else 
//				cout<<" serves restaurant "<< sol[i].second.first+1 ;	
//			cout<<endl;
//		}
//		cout << "Total distance sum = "<< res <<endl; 	
//		cout<<endl;
//	}
//	return 0;
//}
