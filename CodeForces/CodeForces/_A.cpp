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
//		char M[109][109];
//
//		bool check(int i, int j)
//		{
//			int c=0;
//			c += (M[i+1][j]=='o');
//			c += (M[i][j+1]=='o');
//			c += (M[i-1][j]=='o');
//			c += (M[i][j-1]=='o');
//			return c%2==0;
//		}
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int n;
//	
//	while(cin>>n)
//	{
//
//		Set(M,0);
//
//
//	FOR(i,1,n+1)
//		FOR(j,1,n+1)
//			cin>>M[i][j];
//
//	bool b=1;
//		FOR(i,1,n+1)
//		FOR(j,1,n+1)
//			if(!check(i,j))
//			{
//				b=0;
//				break;
//			}
//
//			if(b)
//				cout << "YES" <<endl;
//			else 
//				cout << "NO" <<endl;
//	}
//	return 0;
//}