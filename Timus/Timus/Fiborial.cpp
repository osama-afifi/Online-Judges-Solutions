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
//#define FOR(i, a, b) for( LL i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//bool p[1000009];
//LL fibo[1000009];
//LL B[1000009];
//vector<int>P;
//
//LL MOD = 1000*1000*1000+7;
//
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	for(int i = 2 ; i*i<=1000000 ; i++)
//		if(!p[i])
//			for(int j = i*i ; j<=1000000 ; j+=i)
//				p[j]=1;
//	
//	
//	fibo[0]=1;
//	fibo[1]=1;
//	FOR(i,2,1000000+1)
//	{
//		if(!p[i])
//			P.push_back(i);
//		fibo[i]=fibo[i-1]+fibo[i-2];
//		fibo[i]%=MOD;
//	}
//
//	int n;
//
//	while(scanf("%d",&n)==1)
//	{
//		if (n == 1)
//		{
//			printf("1\n");
//			continue;
//		}
//		Set(B,0);
//		LL res=0;
//		FOR(i,2,n+1)
//		{
//			LL x=i;		
//
//			bool b=0;
//			FOR(j,0,P.size())
//			{
//				LL c=0;
//				if(P[j]>x)break;
//				if(!p[x])
//				{
//					B[x] += fibo[n-i];
//					B[x]%=MOD; 
//					break;
//				}
//				bool b=0;
//				while(x%P[j]==0)
//				{
//					if(!p[x])
//					{
//						B[P[j]] += fibo[n-i];
//						B[P[j]]%=MOD;
//						b=1;
//						break;
//					}
//					x/=P[j];
//					B[P[j]] += fibo[n-i];
//					B[P[j]]%=MOD;
//				}
//				if(b)break;
//			}
//
//
//		}
//		LL D=1;
//
//		FOR(i,2,n+1)
//		{
//			//	if(P[i]>n)break;
//			D *= (LL)(B[i]+1LL);
//			D %=MOD;
//		}
//		printf("%lld\n",D);
//
//	}
//	return 0;
//}