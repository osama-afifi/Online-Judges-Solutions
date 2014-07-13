//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<queue>
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//int oo=1<<25;
//
//long long C[100][100];
//void pascal()
//{
//	for(int i = 0 ; i<70 ; i++)
//	{C[i][0]=C[0][i]=1;}
//
//	for(int i = 1 ; i<70 ; i++)
//		for(int j = 1 ; j<=i ; j++)
//			if(j!=i)
//			C[i][j]=C[i-1][j]+C[i-1][j-1];
//			else C[i][j]=1;
//
//}
//
//long long choose(int n , int k)
//{  return C[n][k];  }
//
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	
//	pascal();
//
//	int n,m,t;
//	while(cin>>n>>m>>t)
//	{
//	long long res=0;
//	for(int i = 4 ; i <t ;i++  )
//		if(t-i<=m && n-i>=0)
//				res+=choose(n,i)*choose(m,t-i);
//
//	cout<<res<<endl;
//	}
//return 0;
//}