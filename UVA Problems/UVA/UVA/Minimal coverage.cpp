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
//int m;
//vector<pair<int,int>  >arr;
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		arr.clear();
//		cin>>m;
//		while(1)
//		{
//			pair<int,int>p;
//			cin>>p.first>>p.second;
//			if(p==mp(0,0))break;
//			arr.push_back(p);
//		}
//
//		sort(arr.begin(),arr.end());
//		vector<int>ans;
//
//		int a=0,b=0;
//		int i=0;
//		while(b<m)
//		{
//			// find max covering segment
//			int idx=-1,best=0;
//			b=a;
//			while(i<arr.size() && arr[i].first<=a)
//			{
//				if(arr[i].second>=b)
//				{
//					idx = i;
//					b = arr[i].second;
//				}
//				++i;
//			}
//
//			if(idx==-1)
//				break;
//			else
//			{
//				ans.push_back(idx);
//				a = b = arr[idx].second;
//			}
//
//		}
//
//		if(b>=m)
//		{
//			cout << ans.size() << endl;
//			FOR(i,0,ans.size())
//				cout << arr[ans[i]].first << " " << arr[ans[i]].second <<endl;
//
//		}
//		else
//		{
//			cout << 0 <<endl;
//		}
//		if(t)
//			cout <<endl;
//	}
//
//	return 0;
//}