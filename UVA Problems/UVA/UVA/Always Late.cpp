//#include <iostream>
//#include <stdio.h>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <math.h>
//#include <map>
//using namespace std;
//int const oo = 1<<25;
//int sec[103][103];
//int shortest[103][103];
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
//int len;
//	int n,m,q;
//	int kase=0;
//	while(readint(n))
//	{
//		readint(m);
//		if(n==0 && m==0)break;
//
//		for(int i = 0 ; i<= n ; i++)
//		{
//			for(int j = 0 ; j<= n ; j++)
//			{
//				sec[i][j]=oo;
//				shortest[i][j]=oo;
//
//			}
//			sec[i][i]=oo;
//			shortest[i][i]=0;
//		}
//
//		int n1,n2,c;
//
//
//		for(int i = 0 ; i< m ; i++)
//		{
//			//scanf("%d%d%d",&n1,&n2,&c);
//			readint(n1);
//			readint(n2);
//			readint(c);
//			sec[n1][n2]=sec[n2][n1]=c;
//			shortest[n1][n2]=shortest[n2][n1]=c;
//		}
//		for(int k = 0 ; k< n ; k++)
//			for(int i = 0 ; i< n ; i++)
//				for(int j = 0 ; j< n ; j++)
//					if(shortest[i][k]+shortest[k][j]<shortest[i][j])
//						shortest[i][j]=shortest[i][k]+shortest[k][j];
//
//		
//				for(int k = 0 ; k<n ; k++)
//					for(int i = 0 ; i< n ; i++)
//						for(int j = 0 ; j< n ; j++)
//						{
//							len=shortest[i][k]+shortest[k][j];
//							if(len>shortest[i][j] && ( shortest[i][j]==sec[i][j] || len<sec[i][j]) )
//								sec[i][j]=len;
//
//							len=shortest[i][k]+sec[k][j];
//							if(len>shortest[i][j] && ( shortest[i][j]==sec[i][j] || len<sec[i][j]) )
//								sec[i][j]=len;
//
//							len=sec[i][k]+shortest[k][j];
//							if(len>shortest[i][j] && ( shortest[i][j]==sec[i][j] || len<sec[i][j]) )
//								sec[i][j]=len;
//
//							len=sec[i][k]+sec[k][j];
//							if(len>shortest[i][j] && ( shortest[i][j]==sec[i][j] || len<sec[i][j]) )
//								sec[i][j]=len;
//						}
//			
//						printf("Set #%d\n",++kase);
//						readint(q);
//					//	scanf("%d",&q);
//						for(int i = 0 ; i< q ; i++)
//						{
//							//scanf("%d%d",&n1,&n2);
//							readint(n1);
//							readint(n2);
//							if(sec[n1][n2]>=oo || sec[n1][n2]==shortest[n1][n2])
//								puts("?");
//							else
//								printf("%d\n",sec[n1][n2]);
//						}
//	}
//	return 0;
//}