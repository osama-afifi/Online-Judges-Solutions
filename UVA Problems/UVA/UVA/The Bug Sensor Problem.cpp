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
//int point[1005][2];
//int vis[1005];
//double path[1005][1005];
//double maxi;
//int t,n,m,mid;
//int square(int n)
//{return n*n;}
//
//void dfs(int p ,int set , int limit)
//{
//	vis[p]=set;
//
//	for(int i = 0 ; i < m ; i++)
//		if(!vis[i] && path[p][i]<=limit)
//			dfs(i,set,limit);
//
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	//scanf("%d",&t);
//	readint(t);
//	while(t--)
//	{
//		//scanf("%d",&n);
//		readint(n);
//		m=0;
//		maxi=0;
//		while(readint(point[m][0]))
//		{
//			if(point[m][0]==-1)break;
//			readint(point[m][1]);
//		//	scanf("%d",&point[m][1]);
//			for(int i = 0 ; i<m ; i++){
//			//path[m][i]=path[i][m]= sqrt( (double) square(point[m][0]-point[i][0]) + square(point[m][1]-point[i][1]) );
//				 path[i][m] = path[m][i] = sqrt(pow(point[m][0]-point[i][0], 2.0)+pow(point[m][1]-point[i][1], 2.0));
//				if(path[m][i]>maxi)
//					maxi=path[m][i];
//			}
//			m++;
//		}
//
//		int beg=0,prev=-1,end=(int)ceil(maxi),ans,sets;
//
//		while(beg<=end)
//		{
//			mid = (beg+end)/2;
//
//			if(mid==prev)break;
//				prev=mid;
//
//			sets=0;
//
//			memset(vis, 0, sizeof(vis));
//
//			for(int i = 0 ; i < m ; i++)
//				if(!vis[i])
//				dfs(i,++sets,mid);
//			
//				
//				if(sets>n)
//					beg=mid;
//
//				else
//				{
//					if(sets==n)ans=mid;
//					end=mid;
//				}
//
//
//		}
//
//		printf("%d\n",ans);
//
//	}
//	return 0;
//}
