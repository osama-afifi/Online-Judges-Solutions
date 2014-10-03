//// Diagonal Trick
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
//LL arr[5009][5009];
//LL acc[2][20009];
//int n;
//
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//	cin.sync_with_stdio(false);
//
//	while(cin>>n)
//	{
//		Set(acc,0);
//		FOR(i,0,n)
//			FOR(j,0,n)
//		{
//				cin>>arr[i][j];
//				acc[0][i+j]+=arr[i][j];
//				acc[1][i-j+n]+=arr[i][j];
//		}
//
//
//		LL maxi1=-1e18,maxi2=-1e18;
//		pair<int,int>ret1,ret2;
//		ret1=mp(0,0);
//		ret2=mp(1,1);
//			FOR(i,0,n)
//		FOR(j,0,n)
//	{
//		LL acc1 = acc[0][i+j];
//		LL acc2 =acc[1][i-j+n];
//		LL sum = acc1+acc2-arr[i][j];
//		if((i+j)&1LL)
//		{
//			if(sum>maxi2)
//				maxi2=sum,ret2=mp(i,j);
//		}
//		else
//		{
//			if(sum>maxi1)
//				maxi1=sum,ret1=mp(i,j);
//		}
//	}
//
//		cout << maxi1+maxi2 <<endl;
//		cout << ret1.first+1 << " " << ret1.second+1 << " ";
//		cout << ret2.first+1 << " " << ret2.second+1 << " ";
//		cout <<endl;
//	}
//	return 0;
//}