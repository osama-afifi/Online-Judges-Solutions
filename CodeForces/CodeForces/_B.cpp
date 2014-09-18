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
//int arr[1000*109];
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//	while(cin>>n)
//	{
//		FOR(i,1,n+1)
//			cin>>arr[i];
//		LL sum=0;
//		LL c=0;
//		arr[0]=0;
//		FOR(i,1,n+1)
//		{
//			sum += arr[i-1]-arr[i];
//			if(sum<0)
//				c+= -sum,sum=0;
//		}
//		cout << c<<endl;
//	}
//
//
//	return 0;
//}