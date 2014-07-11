//#include <iostream>
//#include <cstring>
//#include <string>
//#include <string>
//#include <math.h>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
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
//
//bool prime[100000007];
//vector <int> P;
//int target;
//
//inline void sieve()
//{
//	int i,j;
//	prime[0]=prime[1]=false;
//	for(i = 2 ; i<=10000 ; i++)
//	{
//		if(prime[i])
//		{
//			P.push_back(i);
//			for(j=i*i;j<=10000 ; j+=i)
//				prime[j]=0;
//		}
//	}
//}
//
//inline bool isprime(const int &n)
//{
//	if(n<=10000)
//		return prime[n];
//	if(!(n&1))return false;
//	int i;
//	for(i = 0 ; i<P.size() && P[i]*P[i]<=n ; i++)
//		if(n%P[i]==0)return false;
//	return true;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(prime,1,sizeof prime);
//
//	sieve();
//	int n;
//	while(readint(n))
//	{
//		if(n&1)
//		{
//			if(isprime(n-2))
//				printf("%d is the sum of 2 and %d.\n",n,n-2);
//			else
//				printf("%d is not the sum of two primes!\n",n);
//		}
//		else
//		{
//			int i;
//			int x=sqrt((double)n);
//			pair<int,int> ans;
//			bool found=false;
//			for(i=n/2-1;i<=n && i>=3 ;i--)
//				if(isprime(i) && isprime(n-i))
//				{
//					found=true;
//					ans=make_pair(i,n-i);
//					break;
//				}
//
//				if(found)
//					printf("%d is the sum of %d and %d.\n",n,ans.first,ans.second);
//				else
//					printf("%d is not the sum of two primes!\n",n);
//		}
//
//
//
//	}
//	return 0;
//}
