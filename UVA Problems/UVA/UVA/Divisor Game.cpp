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
//
//
//int t,n;
//using namespace std;
//
//	int divi[1000007];
//	int dp[1000007];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	memset(divi,0,sizeof divi);
//
//	for(int i=2;i<=1000000;i++)
//		for(int j=i;j<=1000000;j+=i)
//			divi[j]++;
//
//	dp[0]=1;
//	int maxi=1;
//	for(int i=1;i<=1000000;i++)
//	{
//		if(divi[i]>=maxi)
//		{
//			maxi=divi[i];
//			dp[i]=i;
//		}
//		else
//			dp[i]=dp[i-1];
//	}
//
//	readint(t);
//	while(t--)
//	{
//		readint(n);
//		printf("%d\n",dp[n]);
//	}
//	return 0;
//}