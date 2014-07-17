//// Accepted
//// BIT
//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <math.h>
//#include <queue>
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define MAX 1000009
//using namespace std;
//
//struct Query
//{
//	char type;
//	string s;
//	int b,e;
//	vector<int>index;
//};
//
//char cur[MAX];
//char All[MAX];
//vector<int>T;
//int n;
//vector<Query>Q;
//
//void update(int i, int v) {
//    i++;
//    while (i <= T.size()) {
//        T[i - 1] += v;
//        i += i & (-i);
//    }
//}
//
//int find(int cum) {
//    int idx = 0, m = T.size() >> 1;
//    while (m) {
//        if (T[idx + m - 1] < cum) 
//            cum -= T[idx + m - 1] , idx += m;
//        m >>= 1;
//    }
//    return idx;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	
//	scanf("%d",&t);
//	while(t--)
//	{
//		Q.clear();
//		T.clear();
//		Query q;
//		scanf("%s",&cur);
//		q.type = 'I' , q.b =  0  , q.s = string(cur);
//		q.index.clear();
//		q.index.resize(q.s.length());
//		n+=q.s.length();
//		Q.push_back(q);
//
//		while(true)
//		{
//			scanf("%s",&cur);
//			if(cur[0]=='E')break;
//			if(cur[0]=='I')
//			{
//				int x;
//				scanf("%s", &cur);
//				scanf("%d", &x);
//				q.type = 'I' , q.b =  x, q.s = string(cur) , q.e = q.s.length() ;
//				q.index.clear();
//				q.index.resize(q.s.length());
//				Q.push_back(q);
//				n += q.s.length();
//			}
//			else if(cur[0]=='P')
//			{
//				int x,y;
//				scanf("%d %d", &x, &y);
//				q.type = 'P' , q.b =  x , q.e = y;
//				Q.push_back(q);
//			}
//		}
//
//
//		T.clear();
//		    int size = 1 << (int) ceil(log(n)/log(2));
//    T.resize(size);
//	
//		FOR(i,0,n)
//			update(i,1);
//
//		for(int i = Q.size()-1 ; i>=0 ; i--)
//			if(Q[i].type == 'I')
//			{
//				Q[i].index.clear();
//				Q[i].index.resize(Q[i].s.length());
//				for (int j = 0; j < Q[i].s.length(); j++)
//					{
//						int k = find(Q[i].b+1);
//						Q[i].index[j]= k;
//						All[k] = Q[i].s[j];
//						update(k , -1);					
//					}	
//			}
//
//			FOR(i,0,Q.size())
//			{
//				if(Q[i].type=='P')
//				{
//					FOR(j,Q[i].b , Q[i].e+1)
//						printf("%c"  , All[find(j+1)] );
//					printf("\n");
//				}
//					else if(Q[i].type=='I')
//				{
//					FOR(j,0 , Q[i].s.length())
//						update( Q[i].index[j] , 1);
//				}
//			}
//	}
//	return 0;
//}
