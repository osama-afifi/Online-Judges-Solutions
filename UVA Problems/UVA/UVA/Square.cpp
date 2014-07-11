//
//#include <cstring>
//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//int avg;
//bool vis[21];
//int sides[21];
//int n;
//bool square=false;
//
//void solve(int sum, int sidedone, int start)
//{
//	if(square)
//		return;
//	else if(sidedone==3)
//	{
//		square=true;
//		return;
//	}
//	else if(sum==avg)
//		solve(0,sidedone+1,0);
//	else
//		for(int i=start;i<n;i++)	
//			if(!vis[i])
//			{
//				vis[i]=true;
//				if(sum+sides[i]<=avg)
//				solve(sum+sides[i],sidedone,i);
//				vis[i]=false;
//			}
//	
//
//}
//
//int main ()
//{
//
//	freopen("input.in", "r", stdin);
//
//	int t;
//	scanf("%d",&t);
//	while (t>0)
//	{
//		memset(vis,false,sizeof(vis));
//		square=false;
//
//		scanf("%d",&n);
//
//		for(int i=0;i<n;i++)
//		scanf("%d",&sides[i]);
//
//		sort(sides,sides+n);
//		reverse(sides,sides+n);
//		///Summing 
//		int sum=0;
//
//		for(int i=0;i<n;i++)
//		sum+=sides[i];
//
//		///AVG
//avg=sum/4;
//
//if (sum%4!=0 || n<4 || sides[0]>avg){
//		printf("no\n");
//		t--;
//		continue;
//		}
//
//		
//
//	
//
//		solve(0,0,0);
//
//		if(square)
//			printf("yes\n");
//		else
//			printf("no\n");
//
//
//		t--;
//	}
//
//
//	return 0;
//}
