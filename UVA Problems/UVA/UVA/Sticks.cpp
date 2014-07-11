//#include<time.h>
//#include <cstring>
//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//int avg;
//bool vis[150];
//int stick[150];
//int n;
//bool done=false;
//int numsticks;
//int res;
//
//bool solve(int sum, int sticksdone, int start)
//{
//	if(sticksdone == numsticks-1)	return true;
//	bool gdeed = (sum==0 ? true:false) ;
//
//	for(int i=start+1;i<n;i++)	
//		if(!vis[i])
//		{
//			if(sum+stick[i]<avg)
//			{
//				vis[i]=true;
//
//				if(solve(sum+stick[i],sticksdone,i))
//					return true;
//				vis[i]=false;
//				if(gdeed)return false;
//				while(stick[i+1]==stick[i])i++;
//			}
//			else if(sum+stick[i]==avg)
//			{
//				vis[i]=true;
//				if(solve(0,sticksdone+1,-1))
//					return true;
//		
//				vis[i]=false;
//				return false;
//			}
//
//		}
//		return false;
//}
//
//int main ()
//{
//
//	freopen("input.in", "r", stdin);
//
//
//	while (scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		memset(vis,false,sizeof(vis));
//		done=false;
//
//		int total=0;
//		for(int i=0;i<n;i++){
//			scanf("%d",&stick[i]);
//			total+=stick[i];
//		}
//		sort(stick,stick+n);
//		reverse(stick,stick+n);
//	
//		for(avg = stick[0] ;  avg<=total ; avg++)
//			if(total%avg==0)
//			{
//				numsticks=total/avg;
//				if(solve(0,0,-1))
//				{
//			//		printf("used time = %.3lf\n",(double)clock()/CLOCKS_PER_SEC);
//					printf("%d\n",avg);
//					break;
//				}
//			}
//	}
//	return 0;
//}
