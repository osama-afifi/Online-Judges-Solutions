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
//int arr[10];
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//	while(cin>>n)
//	{
//
//
//		vector<pair<int,int> > A;
//		FOR(i, 0, n)
//		{
//			int a;
//			cin >> a;
//			A.push_back(mp(a, i));
//		}
//		sort(A.begin(), A.end());
//
//		vector< vector<pair<int,int> > > res;
//		res.push_back(A);
//
//		FOR(i, 0, A.size())
//		{
//			if(i > 0 && A[i].first == A[i-1].first){
//				swap(A[i], A[i-1]);
//				res.push_back(A);
//
//				if(res.size()==3)
//				{
//					cout <<"YES" <<endl;
//					FOR(i,0,3)
//					{
//						FOR(j,0,n)
//							cout << res[i][j].second+1 << " ";
//						cout <<endl;
//					}
//				}
//				swap(A[i], A[i-1]);
//			}
//		}
//						if(res.size()<3)
//							cout <<"NO" <<endl;
//
//	}
//
//	return 0;
//}