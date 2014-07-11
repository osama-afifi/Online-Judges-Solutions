//#include <iostream>
//
//using namespace std;
//
//
//int d[200][200][200];
//int inter[200];
//int const oo = 1<<25;
//
//int max(int a , int b)
//{return a>b ? a :b;}
//
//int min(int a , int b)
//{return a<b ? a :b;}
//
//
//int main()
//{
//	int t,n,p,q,num,kase=0;
//	freopen("input.in","r",stdin);
//	scanf("%d",&t);
//	while(t--)
//	{
//
//		scanf("%d",&n);
//
//
//		for(int i = 0 ; i<=n ; i++){
//			for(int j = 0 ; j<=n ; j++)
//				d[0][i][j]=oo;
//			d[0][i][i]=0;
//		}
//
//		for(int i = 1 ; i<=n-1 ; i++)
//			for(int j = i+1 ; j<=n ; j++){
//				scanf("%d",&num);
//				if(num==-1)d[0][i][j]=d[0][j][i]=oo;
//				else d[0][i][j]=d[0][j][i]=num;
//			}
//
//			scanf("%d",&p);
//			for(int i = 1 ; i<=p ; i++)
//			{
//				scanf("%d",&num);
//				inter[i]=num;
//			}
//
//
//			for(int k = 1 ; k<=p ; k++)
//			{
//
//				for(int i = 1 ; i<=n ; i++)
//					for(int j = 1 ; j<=n ; j++)
//						d[k][i][j]=min(d[k-1][i][j],d[k-1][i][inter[k]]+d[k-1][inter[k]][j]);
//
//			}

//
//			scanf("%d",&q);
//			int kq,s,tr;
//			printf("Case %d:",++kase);
//			while(q--)
//			{
//				scanf("%d%d%d",&kq,&s,&tr);
//				if(d[kq][s][tr]<oo)			
//					printf(" %d",d[kq][s][tr]);	
//				else 
//					printf(" -1");	
//			}
//
//			putchar('\n');
//	}
//
//	return 0;
//}