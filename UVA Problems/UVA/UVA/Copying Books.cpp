//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int n,k;
//int books[550];
//int acc[550];
//int oo=1<<35;
//
//int solve(int left , int right , int depth)
//{
//	
//	if(depth<=0)
//		return acc[right]-acc[left];
//	int mini=oo;
//	for(int i =left+1;i<right;i++)
//		mini=min(mini,min(solve(left,i,depth-1),solve(i,right,depth-1)));
//	return mini;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//	scanf("%d",&t);
//	while(t--)
//	{
//		memset(acc,0,sizeof acc);
//		scanf("%d%d",&n,&k);
//		acc[0]=books[0]=0;
//		for(int i = 1;i<=n;i++)
//		{
//			scanf("%d",&books[i]);
//			if(i)
//				acc[i]=acc[i-1]+books[i];
//			else
//				acc[i]=books[i];
//		}
//		
//
//		int res=solve(0,n,k);
//		printf("%d\n",res);
//	}
//	return 0;
//}