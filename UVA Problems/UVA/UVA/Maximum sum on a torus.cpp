//#include <iostream>
//#include <stdio.h>
//#include <cstring>
//using namespace std;
//
//int arr[250][250];
//int sum[250];
//int const oo = 1<<20;
//
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
//int main ()
//{
//	freopen ("input.in","r",stdin);
//
//	int t,n;
//	readint(t);
//	while(t--)
//	{
//
//		readint(n);
//		for(int i= 1 ; i<= n ; i++)
//			for(int j= 1 ; j<= n ; j++)
//			{
//				readint(arr[i][j]);
//				arr[i+n][j]=arr[i][j+n]=arr[i+n][j+n]=arr[i][j];
//			}
//
//			int maxi=0;
//			int cur=0;
//
//			for(int k= 1 ; k<=n ; k++)
//			{
//				memset(sum,0,3*n*sizeof(int));
//				for(int i=k ; i-k<n && i<= 2*n ; i++)
//				{
//					//if(i-k>=n)break;
//					for(int j= 1 ; j<= 2*n ; j++)
//						sum[j]+=arr[i][j];
//
//					for(int j= 0 ; j< n ; j++)
//					{
//						cur=0;
//						for(int i= 1 ; i<= n ; i++)
//						{
//							cur+=sum[j+i];
//							if(cur>maxi)
//								maxi=cur;
//							else if(cur<0)cur=0;
//						}
//					}
//				}
//			}
//
//			printf("%d\n",maxi);
//
//	}
//
//
//
//
//
//	return 0;
//}
