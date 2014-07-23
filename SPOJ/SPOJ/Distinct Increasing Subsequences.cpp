//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair 
//#define MAX 10009 
//using namespace std;
//
//int n,k;
//int d[52][MAX];
//int num;
//int M =  5000000;
//
//void update(int T[] ,  int i  , int v)
//{
//	while(i<=10002)
//	{
//		T[i]+=v;
//		if(T[i] >= M) T[i] -= M;
//		i+=(i & -i);
//	}
//}
//
//int read(int T[] , int i )
//{
//	int sum = 0;
//	while(i>0)
//	{
//		sum +=T[i] , i-=(i& -i);
//		if(sum >= M) sum -= M;
//	}
//	return sum;
//}
//
//int arr[10007];
//bool vis[10007];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	scanf("%d %d" , &n , &k);
//	set<int>S;
//	map<int,int>M;
//
//	FOR(i,0,n)
//	{
//		scanf("%d",&arr[i]);
//		S.insert(arr[i]);
//	}
//	int c=1;
//	for(set<int>::iterator it = S.begin() ;it!=S.end() ; it++)
//		if(M[*(it)]==0)
//			M[*(it)]=c++;
//
//	Set(vis,0);
//	FOR(i,0,n)
//	{
//		int num = M[arr[i]]+1;
//		if(!vis[num]&& read(d[1],num)-read(d[1],num-1)==0)
//		{
//			update(d[1],num, 1);
//			vis[i]=1;
//		}
//		for(int j = k ; j >1 ; --j)
//			update(d[j], num, read(d[j-1],num-1) - (read(d[j],num)-read(d[j],num-1) )) ;	
//	}
//
//	printf("%d\n" , read(d[k] , 10002)%5000000);
//
//	return 0;
//}
//
//
