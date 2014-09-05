//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//int main()
//{
//
//	//freopen("input.in", "r", stdin);
//
//	unsigned long long o;
//
//
//	while(cin>>o)
//	{
//
//	  unsigned long long n=o;
//
//
//		int org[1000];
//		int palin[1000];
//		int i;
//		int dig_pal;
//		int dig_rig;
//		unsigned long long number_pal=0;
//		unsigned long long number_rig=0;
//		unsigned long long number_res=0;
//
//		////number to array
//		for(i=0 ; n!=0 ; i++ )
//		{
//			palin[i]=n%10;
//			n=n/10;
//		}
//
//		//// palin to right
//		for( int j=0 ;j<i ; j++ )
//			org[j]=palin[i-j-1];
//
//		//array to palin and right no
//		for( int j=0 ;j<i ; j++ )
//		{
//			dig_pal=org[j];
//		number_pal= number_pal + (dig_pal* pow( 10.0 , j )); //rev
//
//		dig_rig=org[i-j-1];
//		number_rig= number_rig + (dig_rig* pow( 10.0 , j )); //rig
//
//		}
//
//
//		//sum them
//		number_res=number_rig=number_pal;
//
//
//	}
//	return 0;
//}