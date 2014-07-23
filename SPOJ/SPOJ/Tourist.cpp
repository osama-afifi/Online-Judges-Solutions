//#include<iostream> 
//#include<string> 
//#include<map> 
//#include<vector> 
//#include<queue> 
//#include<stack> 
//#include<set> 
//#include<algorithm> 
//#include<sstream> 
//#include<limits.h> 
//#include<iomanip> 
//#include<cstring> 
//#include<bitset> 
//#include<fstream> 
//#include<cmath> 
//#include<cassert> 
//#include <stdio.h> 
//#include<ctype.h>
//
//using namespace std ; 
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair  
//int const oo = 1<<25;
//
//const int MAX = 101;
//int w, h;
//char a[MAX][MAX];
//int d[MAX][MAX][MAX];
//
//int f(int i1, int j1, int i2, int j2)
//{
//	if(i1==h-1 && j1==w-1)
//		return (a[i1][j1]=='#')? -oo : (a[i1][j1] == '*');
//	if(i1>=h||j1>=w||i2>=h||j2>=w||a[i1][j1]=='#'||a[i2][j2]=='#')
//		return -oo;
//	if(d[i1][j1][i2]!=-1)
//		return d[i1][j1][i2];
//	int s1 = f(i1+1,j1,i2+1,j2);
//	int s2 = f(i1+1,j1,i2,j2+1);
//	int s3 = f(i1,j1+1,i2+1,j2);
//	int s4 = f(i1,j1+1,i2,j2+1);
//	return d[i1][j1][i2] = max(s1,max(s2,max(s3,s4)))+(a[i1][j1]=='*') + (a[i2][j2]=='*' && (i1 != i2 || j1 != j2));
//}
//int main()
//{
//	freopen("input.in","r",stdin);
//	int cases;
//	cin >> cases;
//	while(cases --) 
//	{
//		cin>>w>>h;
//		FOR(i,0,h)
//			FOR(j,0,w)
//			cin>>a[i][j];
//		Set(d,-1);
//		cout << max(0, f(0,0,0,0)) << endl;
//	}
//}