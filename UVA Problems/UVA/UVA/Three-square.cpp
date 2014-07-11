//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//
//using namespace std;
//int perf[50000];
//int dp[260][50001];
//bool vis[260][50001];
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	// perfect nums
//	int c=0;
//
//	perf[c]=0;
//	for( c=1 ; perf[c-1]<=50000 ; c++)
//		perf[c]=c*c;
//
//
//
//
//
//	int n,t;
//	cin>>t;
//	bool found;
//	while(t--)
//	{
//		cin>>n;
//		found=false;
//		if(n%8!=7)
//		{
//		for(int i = 0 ; perf[i]<=n ; i++){if(found)break;
//			for(int j = i ; perf[i]+perf[j]<=n; j++){if(found)break;
//				for(int k = j ; perf[i]+perf[j]+perf[k]<=n ; k++)
//				{
//					if(perf[i]+perf[j]+perf[k]==n)
//					{
//						printf("%d %d %d\n",i,j,k);
//						found=true;
//						break;
//					}
//				}}}
//		}
//		if(!found)printf("-1\n");
//	}
//
//	return 0;
//}