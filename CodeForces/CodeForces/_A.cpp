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
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	int x1,x2,y1,y2;
//	while(cin>>x1>>y1>>x2>>y2)
//	{
//		int x3,y3,x4,y4;
//		if(x1==x2)
//		{
//			int s = abs(y2-y1);
//			x3 = x4 = x1+s;
//			y3 = y1;
//			y4 = y2;
//		}
//		else if(y1==y2)
//		{
//			int s = abs(x2-x1);
//			y3 = y4 = y1+s;
//			x3 = x1;
//			x4 = x2;
//		}
//		else
//		{
//			if(abs(x1-x2)==abs(y1-y2))
//			{
//				x3=x1;y3=y2;
//				x4=x2;y4=y1;
//
//			}
//			else
//			{
//				cout << -1 << endl;
//				continue;
//			}
//
//		}
//
//		cout << x3 << " " << y3 << " "  << x4 << " "  << y4 <<endl;
//
//	}
//
//	return 0;
//}