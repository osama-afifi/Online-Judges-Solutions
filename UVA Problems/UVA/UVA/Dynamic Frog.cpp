//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstdio>
//
//using namespace std;
//
//pair<int,int>arr[101];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t,kase=0;
//	long long n,d;
//	char str[10];
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%lld%lld",&n,&d);
//		long long res=0;
//		int x;
//		vector<long long>V;
//		V.push_back(0);V.push_back(0);
//		for(int i  = 0 ; i<n  ;i++)
//		{
//			scanf("%1s-%d",&str,&x);
//			V.push_back(x);
//			if(str[0]=='B')V.push_back(x);
//		}
//		V.push_back(d);V.push_back(d);
//		for(int i  = 2 ; i< V.size() ;i++)
//			res=max(res,V[i]-V[i-2]);
//		printf("Case %d: %lld\n",++kase,res);
//	}
//
//	return 0;
//}