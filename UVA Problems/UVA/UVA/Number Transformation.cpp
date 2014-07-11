//#include <iostream>
//#include <cstdlib>
//#include <stdio.h>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//
//struct node
//{
//	int num,counter;
//
//	node()
//	{}
//
//	node(int n , int c) : counter(c) , num(n)
//	{}
//};
//bool isPrime(int n)
//{
//	if(n==2)return true;
//	if(n==1)return false;
//	for(int i = 2 ; i <= (n/2)+1 ; i++)
//		if(n%i==0)return false;
//
//	return true;
//}
//
//bool prime[1002];
//int m;
//vector<int> factor[1000];
//bool vis[1000];
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int x,y,kase=0;
//
//	for(int i = 1 ; i<=1000 ; i++)
//		if(isPrime(i))
//			prime[i]=true;
//		else prime[i]=false;
//
//		for(int i = 1 ; i<=1000 ; i++)
//		{
//			if(i%2==0)factor[i].push_back(2);
//			for(int j = 3 ; j<i ; j+=2)
//			{
//				if(prime[j] && i%j==0)
//				{
//					factor[i].push_back(j);
//				}
//			}
//
//		}
//
//		while(scanf("%d%d",&x,&y) !=EOF)
//		{
//			for(int i = x ; i<=y ;i++)
//				vis[i]=false;
//
//			if(x==0 || y==0)break;
//
//			if(x==y)
//			{
//				printf("Case %d: 0\n",++kase);
//				continue;
//			}
//			if(x>y)
//			{
//				printf("Case %d: -1\n",++kase);
//				continue;
//			}
//
//			if(factor[x].empty())
//			{
//				printf("Case %d: -1\n",++kase);
//				continue;
//			}
//
//			queue <node> BFS;
//
//
//			BFS.push(node(x,0));
//
//			node current;
//			bool found =false;
//			while(!BFS.empty())
//			{
//				current=BFS.front();
//
//				if(current.num==y)
//				{
//					found=true;
//					break;
//				}
//
//				BFS.pop();
//
//				for(int i =0 ; i<factor[current.num].size() ; i++)
//				{
//					if(vis[current.num+factor[current.num][i]] || current.num+factor[current.num][i]>y)continue;
//					BFS.push( node(current.num+factor[current.num][i], current.counter+1) );
//					vis[current.num+factor[current.num][i]]=true;
//				}
//			}
//
//			if(found)
//				printf("Case %d: %d\n",++kase,current.counter);
//			else
//				printf("Case %d: -1\n",++kase);
//		}
//		return 0;
//}