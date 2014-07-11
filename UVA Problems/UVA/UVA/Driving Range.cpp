//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//
//using namespace std;
//
//
//struct Edge
//{
//	int n1,n2,w;
//
//	bool operator < (const Edge a)const
//	{
//		return a.w>w;
//	}
//
//};
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
//
//Edge road[10000009];
//
//int cmp(const void*a,const void*b)
//{
//	return ((Edge*)a)->w-((Edge*)b)->w;
//}
//
//
//int n,m;
//
//int forest[1000009];
//
//int max(int a , int b){return (a>b) ? a : b ;}
//
//int getForest(int i)
//{
//	if(i==forest[i])
//		return i;
//	else
//		return forest[i]=getForest(forest[i]);
//}
//
//bool isUnion(int a,int b)
//{
//	return (getForest(a)==getForest(b));
//}
//
//void makeUnion(int a,int b)
//{
//	forest[getForest(a)] = getForest(b);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int n1,n2,cost,kase=0;
//
//	while(readint(n))
//	{
//		readint(m);
//		if(n==0 && m==0)break;
//		for(int i=0;i<m;i++)
//		{
//			readint(road[i].n1);
//			readint(road[i].n2);
//			readint(road[i].w);
//			//scanf("%d%d%d",&road[i].n1,&road[i].n2,&road[i].w);
//		}
//		for(int i=0;i<n;i++)
//			forest[i]=i;
//
//		//	sort(road,road+m);
//		qsort(road,m,sizeof(Edge),&cmp);
//
//		int  res=0;
//		int j=0;
//		for(int i = 0; i<m && j<n-1 ; i++)
//		{
//			if (!isUnion(road[i].n1,road[i].n2))
//			{
//				if(road[i].w>res)
//				res=road[i].w;
//				makeUnion(road[i].n2,road[i].n1);
//				j++;
//			}
//
//		}
//		int forests=0;
//		for(int i =0 ; i<n ;i++)
//		{
//			if(forest[i]==i)
//			{
//				forests++;
//			}
//			if(forests>1)break;
//		}
//
//		if(forests==1)
//		printf("%d\n",res);
//		else
//			puts("IMPOSSIBLE");
//
//	}
//
//	return 0;
//}