//
//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <cstring>
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
//
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair
//#define MAX 100048
//
//int arr[MAX+9];
////int S[3*MAX];
//int T1[MAX+9];
//int T2[MAX+9];
//int n,k;
//
//int cum1(int i)
//{
//	if(!i)return 0;
//	int sum = 0;
//	while(i>0)
//	{
//		sum+=T1[i];
//		i-=(i&-i);
//	}
//	return sum;
//}
//
//void upd1(int i ,int v)
//{
//	while(i<=MAX)
//	{
//		T1[i]+=v;
//		i+=(i&-i); 
//	}
//
//}
//
//int cum2(int i)
//{
//	if(!i)return 0;
//	int sum = 0;
//	while(i>0)
//	{
//		sum+=T2[i];
//		i-=(i&-i);
//	}
//	return sum;
//}
//
//void upd2(int i ,int v)
//{
//	while(i<=MAX)
//	{
//		T2[i]+=v;
//		i+=(i&-i); 
//	}
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	while(cin>>n>>k)
//	{
//		Set(T1,0);
//		Set(T2,0);
//		int num;
//		FOR(i,0,n)
//		{
//			scanf("%d",&num);
//			if(num<0)
//				upd1(i+1,1);
//			else if(num==0)
//				upd2(i+1 , 1);
//			arr[i+1]=num;
//		}
//
//		string res = "";
//		char c;
//		int a,b;
//		FOR(i,0,k)
//		{
//			cin>>c;
//			if(c=='C')
//			{
//				scanf("%d %d", &a, &b);
//
//				if(arr[a]<0)
//					upd1(a,-1);
//				else if(arr[a]==0)
//					upd2(a,-1);
//				arr[a] = b;
//
//				if(b<0)
//					upd1(a,+1);
//				else if(b==0)
//					upd2(a,+1);
//				
//			}
//			else if(c=='P')
//			{
//				scanf("%d %d", &a, &b);
//
//				if(cum2(b)-cum2(a-1)>0)
//					printf("0");
//				else if((cum1(b)-cum1(a-1))%2)
//					printf("-");
//				else printf("+");
//			}
//		}
//		putchar('\n');
//	}
//}
//
//
