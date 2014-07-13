//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//using namespace std;
//
//int arr[400009];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n,m;
//scanf("%d %d", &n , &m);
//	
//		Set(arr,0);
//		set<int>S;
//		FOR(i,0,n)
//			S.insert(i+1);
//		FOR(i,0,m)
//		{
//			int l,r,x;
//			scanf("%d%d%d" ,&l  , &r , &x);
//			set<int> ::iterator it1 = S.lower_bound(l);
//
//
//			if(*it1<=r)
//				while(it1!=S.end())
//				{
//					if(*it1>r)break;
//					set<int> ::iterator temp = it1;	
//					++temp;
//					if(*it1 !=x)
//					{
//						arr[*it1] = x;
//						S.erase(it1);
//
//					}
//					it1 = temp;	
//
//				}
//		}
//
//		for (int i = 1; i <= n; ++i) {
//			if(i>1)
//				printf(" ");
//			printf("%d", arr[i]);
//		}
//		 printf("\n");
//	
//	return 0;
//}