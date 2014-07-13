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
////int oo=1<<25;
//int main()
//{
//	freopen("input.in","r",stdin);
//	int cycles;
//	bool mat[109][109];
//	while(cin>>cycles)
//	{
//		Set(mat,0);
//		int n=2;
//		mat[0][1]=mat[1][0]=mat[0][2]=mat[2][0]=mat[2][1]=mat[1][2]=1; cycles--;
//		while(cycles)
//		{
//		FOR(i,)
//			if(!cycles)break;
//			for(int i=0;cycles && i<n;i++){
//				mat[i][n]=mat[n][i]=1;
//				if(i)
//				cycles--;
//			}
//			n++;
//		}
//		cout<<n<<endl;
//		FOR(i,0,n)
//		{
//			FOR(j,0,n)
//			{if(j)putchar(' ');printf("%d",mat[i][j]);}
//			putchar('\n');
//		}
//	}
//
//	return 0;
//}