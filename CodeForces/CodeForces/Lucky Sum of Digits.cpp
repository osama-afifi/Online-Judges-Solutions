//
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#include<stack>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define LL long long
//using namespace std;
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	int n;
//	while(cin>>n)
//	{	
//		int z =n,c=0;
//		while(z)
//			z/=10,c++;
//		int a=0,b=0;
//		int x=0,y=0;
//		bool never = 1;
//		int mini =1<<25;
//		for(int i = 0 ; i*7<=n ; i++)
//			if((n-7*i)%4==0)
//			{
//				x=(n-7*i)/4,y=i;
//				if(x+y<mini)
//				{
//					mini=x+y;
//					never=0;
//					a=(n-7*i)/4,b=i;
//				//	break;
//				}
//			}
//
//			if(never)
//				cout<<-1<<endl;
//			else
//			{
//				FOR(i,0,a)
//					cout<<4;
//				FOR(i,0,b)
//					cout<<7;
//				cout<<endl;
//			}
//	}
//
//	return 0;
//}