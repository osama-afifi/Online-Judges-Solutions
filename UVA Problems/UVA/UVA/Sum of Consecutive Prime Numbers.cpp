//#include <iostream>
//#include <cstring>
//#include <string>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//
//int prime[10007];
//int dp[10007];
//vector <int> P;
//int target;
//void sieve()
//{
//	prime[0]=prime[1]=false;
//	for(int i = 2 ; i<=10000 ; i++)
//	{
//		if(prime[i])
//		{
//			P.push_back(i);
//			for(int j=i*i;j<=10000 ; j+=i)
//				prime[j]=0;
//		}
//	}
//}
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	memset(prime,1,sizeof prime);
//	memset(dp,0,sizeof dp);
//	sieve();
//
//	for(int i = 0 ; i <P.size(); i++)
//	{
//		int sum=0;
//		for(int j=i ; j<P.size() ; j++)
//			{
//				sum+=P[j];
//				if(sum<10001)
//					++dp[sum];
//			}
//	}
//	while(true)
//	{
//		cin>>target;
//		if(!target)break;
//		cout<<dp[target]<<endl;
//	}
//	return 0;
//}
