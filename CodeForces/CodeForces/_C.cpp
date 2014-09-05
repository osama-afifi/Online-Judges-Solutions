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
//int n;
//LL arr[3*100009];
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//
//
//	while(cin>>n)
//	{
//		priority_queue<LL>Q;
//		LL sum=0;
//		LL res=0;
//		FOR(i,0,n)
//		{
//			cin>>arr[i];
//			Q.push(-arr[i]);
//			sum += arr[i];
//		}
//
//		while(Q.size())
//		{
//
//			res += sum;
//			int mini = -Q.top();
//			sum-=mini;
//			Q.pop();
//			if(Q.size())
//			res += mini;
//		}
//
//		cout << res <<endl;
//	}
//	return 0;
//}