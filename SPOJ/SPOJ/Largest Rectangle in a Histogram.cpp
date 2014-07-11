//
//// Method : Segment Trees
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <stack>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 100000
//using namespace std;
//
//
//int hei[100009];
//int n;
//
//inline long long largestRectArea() {
//    stack<int> p;
//    long long  i = 0, m = 0;
//    hei[n]=0;
//    while(i <= n) {
//        if(p.empty() || hei[p.top()] <= hei[i])
//            p.push(i++);
//        else {
//            int t = p.top();
//            p.pop();
//            m = max(m, hei[t] * (p.empty() ? i : i - p.top() - 1 ));
//        }
//    }
//    return m;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		FOR(i,0,n)
//			scanf("%d",&hei[i]);
//		printf("%lld\n",largestRectArea());
//	}
//
//	return 0;
//}
