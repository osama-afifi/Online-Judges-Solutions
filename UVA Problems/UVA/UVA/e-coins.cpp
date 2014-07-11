//#include <iostream>
//#include <cstring>
//#include <stdio.h>
//using namespace std;
//
//int coin1[107];
//int coin2[107];
//int dp[310][310];
//int const oo = 1<<25;
//
//int min(int a, int b)
//{return a>b ? b : a;}
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
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,s,n;
//	//scanf("%d",&t);
//	readint(t);
//	while(t--)
//	{
//
//		//scanf("%d%d",&n,&s);
//		readint(n);
//		readint(s);
//		for(int i=0; i<n ; i++)
//		{
//		readint(coin1[i]);readint(coin2[i]);
//		}
//		//	scanf("%d%d",&coin1[i],&coin2[i]);
//		for(int j = 0 ; j<=s ; j++)
//			for(int k = 0 ; k<=s ; k++)
//				dp[j][k]=oo;
//
//		dp[0][0]=0;
//		for(int i = 0 ; i<n ; i++)
//			for(int j = coin1[i] ; j<=s ; j++)
//				for(int k = coin2[i] ; k<=s ; k++)
//							if(dp[j][k]>1+dp[j-coin1[i]][k-coin2[i]])
//								dp[j][k]=1+dp[j-coin1[i]][k-coin2[i]];
//		
//				
//
//		int mini=oo;
//		bool found=false;
//		for(int j = 0 ; j<=s ; j++)
//		{
//			for(int k = 0 ; k<=s ; k++)
//				if(j*j + k*k == s*s)
//					if(dp[j][k]<mini)
//					{
//						mini=dp[j][k];
//						found=true;
//					}
//
//		}
//		if(mini<oo)
//			printf("%d\n",mini);
//		else
//			puts("not possible");
//
//	}
//
//
//
//	return 0;
//}