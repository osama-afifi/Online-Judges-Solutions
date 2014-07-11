////#include<iostream>
////#include<string>
////#include<cstring>
////#include<vector>
////#include<stdio.h>
////#include<map>
////
////using namespace std;
////
////
////int n;
////vector<int>P;
////bool prime[10000009];
////void sieve()
////{
////
////	memset(prime,1,sizeof prime);
////	for(int i = 2 ; i*i<=10000000 ;i++)
////	{
////		if(prime[i])
////		{
////			P.push_back(i);
////			for(int j = i*i ; j<=10000000 ;j+=i)
////				prime[j]=0;
////		}
////	}
////	prime[1]=0;
////}
////
////vector<int>V;
////int main()
////{
////	freopen("input.in","r",stdin);
////
////	sieve();
////	while(cin>>n)
////	{
////		V.clear();
////		int x=n;
////		if(n>0)
////			printf("1");
////		int z=0;
////		while(z<P.size() && x>1 && P[z]*P[z]<=n )
////		{
////			
////			if(x%P[z]==0)
////			{
////				x/=P[z];
////				V.push_back(P[z]);
////			}
////			else
////				z++;
////
////		}
////
////		for(int i = 0 ;i<V.size() ; i++)
////			printf(" x %d",V[i]);
////
////		if(x>1)
////			printf(" x %d",x);
////		putchar('\n');
////	}
////
////	return 0;
////}
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<stdio.h>
//#include<map>
//
//using namespace std;
//
//
//int n;
//vector<int>P;
//bool prime[10000009];
//void sieve()
//{
//
//	memset(prime,1,sizeof prime);
//	for(int i = 2 ; i*i<=10000000 ;i++)
//	{
//		if(prime[i])
//		{
//			P.push_back(i);
//			for(int j = i*i ; j<=10000000 ;j+=i)
//				prime[j]=0;
//		}
//	}
//	prime[1]=0;
//}
//
//vector<int>V;
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	sieve();
//	while(cin>>n)
//	{
//		V.clear();
//		int x=n;
//		if(n>0)
//			printf("1");
//		int z=0;
//		while(z<P.size() && x>1 && P[z]*P[z]<=n )
//		{
//			
//			if(x%P[z]==0)
//			{
//				x/=P[z];
//				V.push_back(P[z]);
//			}
//			else
//				z++;
//
//		}
//
//		for(int i = 0 ;i<V.size() ; i++)
//			printf(" x %d",V[i]);
//
//		if(x>1)
//			printf(" x %d",x);
//		putchar('\n');
//	}
//
//	return 0;
//}