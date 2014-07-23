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
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//#define mp make_pair  
//int const oo = 1<<25;
//
//int f[1009];
//char txt[10009];
//char pat[1009];
//int d[10009][1009];
//
//int partial(int i , char c)
//{
//	while(i && pat[i]!=c)
//	{
//		i =	pat[i-1];
//	}
//	if(pat[i]==c)
//		i++;
//	return i;
//}
//
//inline void genFail()
//{
//	int len = strlen(pat);
//    int i=1,j=0;
//    f[0]=0;
//    while(i<len)
//    {
//        if(pat[i]==pat[j])
//        {
//            j++;
//            f[i]=j;
//            i++;
//        }
//        else if(j>0)
//            j=f[j-1];
//        else
//        {
//            f[i]=0;
//            i++;
//        }
//    }
//}
//
//
//int solve(int i , int j)
//{
//	if(txt[i])
//		return 0;
//	if(pat[j])
//		return 1<<25;
//	if(d[i][j]!=-1)
//		return d[i][j];
//	int s1 = solve(i+1 , j) +1;
//	int s2 = solve(i+1 , partial(j , txt[i]));
//	return d[i][j] = min(s1,s2);
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%s%s" , txt , pat)==2)
//	{
//		genFail();
//		Set(d,-1);
//		int res = solve(0,0);
//		printf("%d\n",res);
//	}
//	return 0;
//}