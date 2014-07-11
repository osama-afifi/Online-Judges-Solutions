//#include <iostream>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <math.h>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <vector>
//#include <set>
//#include <stdio.h>
//
//using namespace std;
//
//bool prime[65];
//vector <int> P;
//
//inline void sieve()
//{
//	int i,j;
//	prime[0]=prime[1]=false;
//	for(i = 2 ; i*i<=65 ; i++)
//	{
//		if(prime[i])
//		{
//			//P.push_back(i);
//			for(j=i*i;j<=65; j+=i)
//				prime[j]=0;
//		}
//	}
//}
//
//
//int main()
//{
////	freopen("input.in","r",stdin);
//	memset(prime,1,sizeof prime);
//
//	sieve();
//
//set<unsigned long long>S;
//set<unsigned long long>::iterator it;
////2^64 =(65536)^4
//	unsigned long long p,ii;
//int i,j,power;
//for( i = 2 ; i<=65536;i++)
//{
//	 power= ceil(64.0  / ((double)log((double)i)/(double)log(2.0)));
//	 p=i;
//	 ii=i;
//	for( j = 2 ;j<power;j++)
//	{
//		p*=ii;
//		if(!prime[j])
//		S.insert(p);
//	}
//}
//puts("1");
//for(it=S.begin() ; it!=S.end(); it++)
//	printf("%llu\n",*it);
//
//	return 0;
//}
