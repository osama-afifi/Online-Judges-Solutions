
//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int kase,t;
//	string s;
//	scanf("%d",&t);
//
//while(t--)
//	{
//		cin>> kase >>s;
//		int len =s.length();
//		bool no =1;
//		string res = "";
//		for(int i = len-1 ; i>0 ; i--)
//		{
//			if(s[i]<=s[i-1])continue;
//			no = 0;
//			res = s.substr(i-1,len-i +1);
//			next_permutation(res.begin() , res.end());
//			res = s.substr(0,i-1) + res;
//			break;
//		}
//		printf("%d ",kase);
//		if(no)
//			puts("BIGGEST");
//		else
//			cout<<res<<endl;
//	}
//	return 0;
//}