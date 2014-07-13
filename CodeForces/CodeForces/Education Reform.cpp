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
//#include<unordered_map>
//
//#define FOR(i, a, b) for( LL i = (a); i < (b); i++ )
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//int n,m,k;
//pair< pair<int,int> , pair<LL,LL> > arr[59];
//LL dp[52][52][102];
//LL const oo = 1e18;
//
//LL solve(int c , int sb, LL p)
//{
//	
//	
//	if(c==n)
//		return 0;
//	if(sb>=m)
//		return -oo;
//	if(p<arr[sb].second.first || p>arr[sb].second.second)
//		return -oo;
//	if(dp[c][sb][p-arr[sb].second.first] != -1)
//		return dp[c][sb][(p-arr[sb].second.first)];
//	LL maxi = -oo;
//
//	FOR(q,sb+1,m+1)
//		if(arr[q].first.first>arr[sb].first.first)
//		{
//			maxi  = max(maxi , solve(c+1 , q ,p*k) + p);
//			maxi  = max(maxi , solve(c+1 , q ,p+k) + p);
//		}
//		return dp[c][sb][(p-arr[sb].second.first)] = maxi;
//}
//
//vector< pair<int,LL> >V;
//
//void print(int c , int sb, LL p)
//{
//	if(c==n)
//		return;
//	if(sb>=m)
//		return;
//	if(p<arr[sb].second.first || p>arr[sb].second.second)
//		return;
//	LL opt = solve(c,sb,p);
//	FOR(q,sb+1,m+1)
//		if(arr[q].first.first>arr[sb].first.first)
//		{
//			if (opt == solve(c+1 , q ,p*k) + p)
//			{
//				V.push_back(mp(arr[sb].first.second , p));
//				print(c+1 , q ,p*k);
//				break;
//			}
//			if (opt == solve(c+1 , q ,p+k) + p)
//			{
//				V.push_back(mp(arr[sb].first.second , p));
//				print(c+1 , q ,p+k);
//				break;
//			}
//		}
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n>>m>>k)
//	{
//		Set(dp,-1);
//		FOR(i,0,m)
//		{
//			cin>>arr[i].second.first>>arr[i].second.second>>arr[i].first.first;
//			arr[i].first.second = i;
//		}
//		arr[m].first.first = 1000;
//
//		sort(arr,arr+m);
//		
//		LL maxi = -oo;
//		FOR(i,0,m)
//				FOR(j, arr[i].second.first,arr[i].second.second+1)
//					maxi = max(maxi , solve(0 , i ,j));
//			
//			//cout << maxi <<endl;
//			if(maxi>=0)
//			{
//				cout << "YES" <<endl;
//
//				bool b = 0;
//
//				FOR(i,0,m)
//				{
//					FOR(j, arr[i].second.first,arr[i].second.second+1)
//					{
//						if(maxi == solve(0 , i,j) )
//						{
//					
//							print(0 , i,j);
//							b=1;
//							break;
//						}
//					
//					}
//					if(b)break;
//				}
//				FOR(i,0,V.size())
//					cout << V[i].first+1 << " " << V[i].second <<endl;
//			}
//			else
//				cout << "NO" <<endl;
//			V.clear();
//	}
//}