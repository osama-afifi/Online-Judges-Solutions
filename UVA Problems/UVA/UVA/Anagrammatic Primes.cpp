//#include<iostream>
//#include<string>
//#include<cstring>
//#include<math.h>
//#include<stdio.h>
//#include<sstream>
//#include<algorithm>
//
//using namespace std;
//
//bool isprime[10000007];
//
//bool check(int n)
//{
//while(n>0)
//{
//if((n%10)%2==0)return false;
//n/=10;
//}
//return true;
//}
//
//
//string text;
//int num;
//void sieve()
//{
//	int count=0;
//	memset(isprime , 1 , sizeof isprime);
//	for(int i =2 ; i*i<=10000000 ;i++)
//	{
//		if(!isprime[i])continue;
//		isprime[i]=true;
//
//		for(int j =2*i ; j<=10000000 ;j+=i)
//			isprime[j]=false;
//	}
//	isprime[0]=isprime[1]=false;
//	isprime[2]=true;
//}
//
//stringstream ss;
//int main()
//{
//	freopen("input.in","r",stdin);
//	sieve();
//	int n,num;
//	while(scanf("%d",&n)==1)
//	{
//		if(!n)break;
//		ss.clear();
//	ss<<n;
//	ss>>text;
//	n++;
//	int limit=pow(10.0,(double)text.length());
//		bool fail=false;
//		while(n<limit)
//		{
//			if(n!=2 && (!isprime[n] || !check(n)) ){
//				n++;
//				continue;
//			}
//			bool fail=false;
//			ss.clear();
//			ss<<n;
//			ss>>text;
//			sort(text.begin(),text.end());
//			do
//			{
//				ss.clear();
//				ss<<text;
//				ss>>num;
//				if(!isprime[num])
//				{
//					fail=true;
//					n++;
//					break;
//				}
//
//			}while(next_permutation(text.begin(),text.end()));
//
//			if(!fail)break;
//
//		}
//			if(!fail && n<limit)
//				printf("%d\n",n);
//			else puts("0");
//		//	ss.clear();
//	}
//
//	return 0;
//}
//
//
//
//
