//#include<iostream>
//#include<stdio.h>
//#include<cstring>
//
//using namespace std;
//
//bool isprime[100077];
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//
//	int t,x,y;
//	cin>>t;
//	while(t--)
//	{
//	cin>>x>>y;
//	for(int i = 0 ; i<=y-x ; i++)
//		isprime[i]=1;
//
//	for(int i = 2 ; i*i<=y ; i++)
//	{
//	int q=(x/i)*i;
//	for(int j = q ; j<=y ; j+=i)
//		if(j>=x && i!=j)
//			isprime[j-x]=0;
//	}
//
//	for(int i = 0 ; i<=y-x ; i++)
//		if( isprime[i] && x+i!=1 )
//			cout<<x+i<<endl;
//	if(t)cout<<endl;
//	}
//
//
//return 0;
//}