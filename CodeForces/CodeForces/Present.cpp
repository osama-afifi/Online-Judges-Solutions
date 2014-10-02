//
//// Binary Search - Interval Overlapping
//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//
//
//LL s[200009];
//LL arr[200009];
//LL n,m,w;
//
//bool f(LL h)
//{
//
//	Set(s,0);
//	LL need=0;
//	LL cur=0;
//	FOR(i,0,n)
//	{
//		if(i)
//			s[i]+=s[i-1];
//		if(arr[i]+s[i]<h)
//		{
//			need +=h-arr[i]-s[i];
//			s[i+w] -= h-arr[i]-s[i];
//			s[i] += h-arr[i]-s[i];
//			
//		}
//		if(need>m)
//			return false;
//	}
//	return need<=m;
//}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//	while(cin>>n>>m>>w)
//	{
//		LL mini=1e18;
//		FOR(i,0,n)
//		{
//			cin>>arr[i];
//			mini = min(mini,arr[i]);
//		}
//		LL b=mini,e=mini+m;
//		LL res=-1;
//		while(b<=e)
//		{
//			LL mid =(b+e)/2;
//			if(f(mid))
//				b=mid+1,res=mid;
//			else e=mid-1;
//		}
//		cout << res <<endl;
//	}
//
//	return 0;
//}