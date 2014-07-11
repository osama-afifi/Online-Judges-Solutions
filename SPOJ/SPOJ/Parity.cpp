//// Meet in the Middle
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//using namespace std;
//typedef unsigned long long LL;
//
//
//struct ds
//{
//	LL sol;
//	int Set;
//	char k;
//
//	bool operator < (const ds &a) const
//	{
//		if(k!=a.k)
//			k<a.k;
//		if(sol!=a.sol)
//			sol<a.sol;
//		return Set<a.Set;
//	}
//
//};
//
//int n,K;
//string arr[70];
//int sign[70];
//LL target;
//
//vector<LL> V1;
//vector<LL> V2;
//int x1,x2;
//ds X1[64000009];
//ds X2[64000009];
//
//void solve1(char idx , char kk,  LL sol ,  int vis)
//{
//	if(kk<0)return;
//	if(idx==V1.size())
//	{
//		ds temp = {sol,vis,K-kk};
//		X1[x1++] = temp;
//		return;
//	}
//	solve1(idx+1, kk , sol , vis);
//	if(kk>0)
//		solve1(idx+1, kk-1 , sol^V1[idx] , vis|(1<<idx));
//}
//void solve2(char idx , char kk,  LL sol ,  int vis)
//{
//	if(kk<0)return;
//	if(idx==V2.size())
//	{
//		ds temp = {sol,vis,K-kk};
//		X2[x2++] = temp;
//		return;
//	}
//	solve2(idx+1, kk , sol , vis);
//	if(kk>0)
//		solve2(idx+1, kk-1 , sol^V2[idx] , vis|(1<<idx));
//}
//
//int bs(int b , int e , char k , LL v)
//{
//	int ret = -1;
//	while(b<=e)
//	{
//		int mid  = (b+e)/2;
//		if(X2[mid].k>k)
//			e = mid-1;
//		else if(X2[mid].sol>v)
//			e = mid-1;
//		else if(X2[mid].sol<v)
//			b = mid+1;
//		else
//			return mid;
//	}
//	return ret;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(cin>>n>>K)
//	{
//		V1.clear();
//		V2.clear();
//		x1 = x2 = 0;
//		FOR(i,0,n)
//		{
//			cin>>arr[i];
//			cin>>sign[i];
//		}
//		int m = arr[0].size();
//
//		FOR(j,0,m)
//		{
//			LL z = 0;
//			FOR(i,0,n)
//			{
//				if(arr[i][j]-'0') 
//					z|=(1ULL<<i);
//			}
//			if(j<m/2)
//				V1.push_back(z);
//			else V2.push_back(z);				
//		}
//		target = 0;
//		FOR(i,0,n)
//			if(sign[i])
//				target |= (1ULL<<i);
//		solve1(0,K,0,0);
//		solve2(0,K,0,0);
//		//sort(X1.begin() , X1.end());
//		sort(X2 , X2+x2);
//		bool found = false;
//		int res = -1;
//		FOR(i,0,x1)
//		{
//			int res = bs(0,x2-1,K-X1[i].k , X1[i].sol^target);	
//			if(res==-1)continue;
//			else
//			{
//				found = 1;
//				bool f = 1;
//				cout << (X1[i].k + X2[res].k) <<endl;
//				FOR(j,0,m)
//				{
//					if(j<m/2)
//					{
//						if(X1[i].Set & (1<<j))
//						{
//							if(!f)putchar(' ');
//							printf("%d" , j);
//							f = 0;
//						}
//					}
//					else
//					{
//						if(X2[res].Set & (1<<(j - (m/2))) )
//						{
//							if(!f)putchar(' ');
//							printf("%d" , j);
//							f= 0;
//						}
//					}
//				}
//				if(X1[i].k + X2[res].k > 0)
//					putchar('\n');
//				break;
//			}
//		}
//		if(!found)
//			cout<< -1 <<endl;
//	}
//
//	return 0;
//}
