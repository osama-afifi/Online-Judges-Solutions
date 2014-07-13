//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//int oo=1<<25;
//
//long long  arr[100009];
//
//long long  f(long long  x )
//{
//if(x==0)return 0;
//if(x==1)return 1;
//if(x%2==0)return f(x/2);
//else return f(x/2)+1;
//}
//map<long long ,long long >M;
//map<long long ,long long >::iterator it;
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n;
//	while(scanf("%d",&n)==1)
//	{
//		M.clear();
//		FOR(i,0,n)
//			scanf("%I64d",&arr[i]);
//
//		FOR(i,0,n)
//			M[f(arr[i])]++;
//
//		long long res=0;
//		for(it=M.begin() ; it!=M.end() ; it++)
//			res+=((it->second)*(it->second-1))/2;
//
//		cout<<res<<endl;
//
//	}
//
//	return 0;
//}