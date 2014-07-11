//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <vector>
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
//int dp[100000];
//int arr[100007];
//int weight[100007];
//int maxi;
//int const oo = 1<<25;
//
//int n,t;
//
//int LIS()
//{
//	int maxi=0;
//	memset(dp,0,n*sizeof (int));
//	//dp[0]=1;
//	for(int i =0 ; i<n ; i++)
//	{
//		dp[i]=weight[i];
//		for(int j =0 ; j<i ; j++)
//		{
//			if(arr[j]<arr[i] && dp[i]<dp[j]+weight[i])	
//				dp[i]=dp[j]+weight[i];
//		}
//			if(dp[i]>maxi)
//				maxi=dp[i];
//	}
//	return maxi;
//}
//int LDS()
//{
//	int maxi=0;
//	memset(dp,0,n*sizeof (int));
//	//dp[0]=1;
//	for(int i =0 ; i<n ; i++)
//	{
//		dp[i]=weight[i];
//		for(int j =0 ; j<i ; j++)
//		{
//			if(arr[j]>arr[i] && dp[i]<dp[j]+weight[i])	
//				dp[i]=dp[j]+weight[i];
//		}
//			if(dp[i]>maxi)
//				maxi=dp[i];
//	}
//	return maxi;
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int kase=0;
//	readint(t);
//
//	while(t--)
//	{
//		readint(n);
//
//		for(int i = 0 ; i<n;i++)
//			readint(arr[i]);
//		for(int i = 0 ; i<n;i++)
//			readint(weight[i]);
//
//		int lis=LIS();
//		int lds=LDS();
//
//		if(lis>=lds)
//		printf("Case %d. Increasing (%d). Decreasing (%d).\n",++kase,lis,lds);
//		else
//		printf("Case %d. Decreasing (%d). Increasing (%d).\n",++kase,lds,lis);
//	}
//		return 0;
//	}
//
//
