//#include<iostream>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<queue>
//#include<stack>
//#include<string>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define FORE(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//int t,n;
//
//bool vis[209];
//
//
//pair<int,int> path[209];
//
//
//// {{{ FAST integer input
//#define X10(n) ((n << 3) + (n << 1))
//const int MAXR = 65536;
//char buf[MAXR], *lim = buf + MAXR - 1, *nw = lim + 1;
//
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
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(readint(n))
//	{
//		if(!n)break;
//		Set(vis,0);
//		Set(path,-1);
//		queue<int>Q;
//		Q.push(1);
//		int cur;
//		bool found;
//		//vis[1]=1;
//		while(!Q.empty())
//		{
//			cur=Q.front();
//			if(!cur)
//				break;
//			Q.pop();
//			if(vis[cur])continue;
//			vis[cur]=1;
//			if(path[(cur*10)%n].first==-1)
//			{
//				Q.push((cur*10)%n);
//				path[(cur*10)%n].first=cur;
//				path[(cur*10)%n].second=0;
//			}
//			if(path[(cur*10+1)%n].first==-1)
//			{
//				Q.push((cur*10+1)%n);
//				path[(cur*10+1)%n].first=cur;
//				path[(cur*10+1)%n].second=1;
//			}
//		}
//
//		stack<int>S;
//		for(int i=0 ;  i!=1 ; i =path[i].first)
//		{
//			S.push(path[i].second);
//		}
//
//		printf("1");
//		while(!S.empty())
//		{
//			printf("%d",S.top());S.pop();
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}