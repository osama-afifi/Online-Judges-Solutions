//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <cstring>
//
//using namespace std;
//
//// {{{ FAST integer input
//#define X10(n) ((n << 3) + (n << 1))
//const int MAXR = 65536;
//char buf[MAXR], *lim = buf + MAXR - 1, *nw = lim + 1;
//
//using namespace std;
//
//bool adapt()
//{ // Returns true if there is a number waiting to be read, false otherwise
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	if(nw > lim){
//		int r = fread(buf, 1, MAXR-1, stdin);
//		buf[r] = 0;
//		lim = buf + r - 1;
//		if(r == MAXR - 1){
//			while(isdigit(*lim)) ungetc(*lim--, stdin);
//			if(*lim == '-') ungetc(*lim--, stdin);
//		}
//		nw = buf;
//	}
//	while(nw <= lim && !isdigit(*nw)) ++nw;
//	return nw <= lim;
//}
//
//bool readint(int& n){ // Returns true on success, false on failure
//	if(!adapt()) return false;
//	bool ngtv = *(nw - 1) == '-';
//	for(n = 0; isdigit(*nw); n = X10(n) + *nw++ - '0');
//	if(ngtv) n = -n;
//	return true;
//}
//// end FAST integer input
//
//int t,n1,n2;
//using namespace std;
////int dp[1000007];
//int sum[15000];
//bool isprime[1000007];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int count=0;
//	memset(isprime , 1 , sizeof isprime);
//	
////	memset(dp , 0 , sizeof dp);
//
//	for(int i =2 ; i<=1000000 ;i++)
//	{
//		isprime[1]=false;
//		isprime[0]=false;
//		if(!isprime[i])continue;
//		isprime[i]=true;
//		for(int j =2*i ; j<=1000000 ;j+=i)
//			isprime[j]=false;
//	}
//	isprime[1]=false;
//	isprime[0]=false;
//
//	int prev=2;
//	
//	//
//	//	for(int i =3 ; i<=1000000 ;i++)
//	//	{
//	//		if(isprime[i])
//	//		{
//	//			sum[i-prev]++;
//	//			if(sum[i-prev]>=maxi)
//	//			{
//	//				maxi=sum[i-prev];
//	//				dp[i]=sum[i-prev];
//	//			}
//	//			else
//	///*				if(dp[i]>sum[i-prev])
//	//				dp[i]=sum[i-prev];
//	//				else*/ dp[i]=dp[i-1];
//	//			prev=i;
//	//		}
//	//		else
//	//			dp[i]=dp[i-1];
//	//	}
//
//	readint(t);
//
//	while(t--)
//	{
//		memset(sum , 0 , sizeof sum);
//		readint(n1);
//		readint(n2);
//		if(n1>n2)
//		{
//			puts("No jumping champion");
//			continue;
//		}
//		bool first=true;
//		int res=0;
//		int maxi=0;
//		bool inv=false;
//		for(int i =n1; i<=n2 ;i++)
//		{
//			if(isprime[i])
//			{
//				
//				if(first){
//					prev=i;
//					first=false;
//					continue;
//				}
//				sum[i-prev]++;
//				if(sum[i-prev]>maxi)
//				{
//					maxi=sum[i-prev];
//					res=i-prev;
//					inv=false;
//				}
//				else if(sum[i-prev]==maxi)
//					inv=true;
//				prev=i;
//			}
//		}
//
//		if(maxi>0 && !inv)
//			printf("The jumping champion is %d\n",res);
//		else
//			puts("No jumping champion");
//
//	}
//	return 0;
//}