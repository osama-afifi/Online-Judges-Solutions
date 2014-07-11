//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <cstring>
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
//int const oo = 1<<10;
//
//int arr[150][150];
//int sum[150];
//
//int main ()
//{
//	freopen ("input.in","r",stdin);
//
//	int t,n,b;
//	string text;
//readint(t);
//	cin.ignore();
//	while(t--)
//	{
//		readint(n);
//		readint(b);
//		//scanf("%d%d",&n,&b);
//		for(int i= 0 ; i< n ; i++)
//			for(int j= 0 ; j< n ; j++)
//				arr[i][j]=1;
//		int r1,c1,r2,c2;
//		for(int i= 0 ; i< b ; i++)
//		{
//			readint(r1);
//			readint(c1);
//			readint(r2);
//			readint(c2);
//		//	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
//			for(int j= r1-1 ; j< r2 ; j++)
//				for(int k= c1-1 ; k< c2 ; k++)
//					arr[j][k]=-oo;
//
//		}
//		int maxi=0;
//		int cur=0;
//
//		for(int k= 0 ; k< n ; k++)
//		{
//			memset(sum,0,n*sizeof(int));
//
//			for(int i= k ; i< n ; i++)
//			{
//				for(int j= 0 ; j< n ; j++)
//					sum[j]+=arr[i][j];
//				cur=0;
//				for(int i= 0 ; i< n ; i++)
//				{
//					cur+=sum[i];
//					if(cur<0)cur=0;
//					else if(cur>maxi)
//						maxi=cur;
//				}
//			}
//		}
//
//		if(maxi<0)
//			puts("0");
//		else
//			printf("%d\n",maxi);
//	
//
//	}
//
//
//
//
//
//	return 0;
//}
