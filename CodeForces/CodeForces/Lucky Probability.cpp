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
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//using namespace std;
//
//vector<long long>V;
//
//void gen(long long n)
//{
//	if(n>10e9+4)return;
//	V.push_back(n);
//	gen(n*10+4);
//	gen(n*10+7);
//}
//
//
//long long cross(long long  l1, long long  r1 , long long  l2 , long long  r2 )
//{
//		return max(min(r2,r1)-max(l2,l1)+1,0LL);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	gen(0);
//	sort(V.begin(),V.end());
//
//	long long inp[10];
//		while(cin>>inp[0])
//	{
//		int k;
//		long long a=1LL<<50;
//		long long b=0;
//		FOR(i,0,3)
//			cin>>inp[i+1];
//		cin>>k;
//		FOR(i,0,4)
//		{
//		a = min(a,inp[i]);
//		b = max(b,inp[i]);
//		}
//		
//		long long count = 0;
//		/*int x=0,y=0;
//		int z=0;
//		int start = 0;
//		while(V[start]<a)
//			start++;
//		y = x = start-1;*/
//		long long total  = (inp[1]-inp[0]+1)*(inp[3]-inp[2]+1);
//
//
//		FOR(i,1,V.size())
//		{
//		if(V[i]>b)break;
//		
//		long long l1 = V[i-1]+1;
//		long long r1 = V[i];
//		long long l2 = V[i+k-1];
//		long long r2 = (i+k<V.size()) ? V[i+k]-1 : 10e9+4;
//
//
//		count += cross(l1,r1,inp[0],inp[1]) * cross(l2,r2 , inp[2]  , inp[3]) ;
//		count += cross(l1,r1,inp[2],inp[3]) * cross(l2,r2 , inp[0]  , inp[1]) ;
//
//		if(k==1 && V[i]>=inp[0] && V[i]<=inp[1] && V[i]>=inp[2] && V[i]<=inp[3])count--;
//		}
//
//		long double res = (long double)count / (long double)total;
//		res = min(res,1.0L);
//		cout<<setprecision(12) << fixed << res<<endl;
//	}
//
//
//	return 0;
//}