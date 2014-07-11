// 
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
//typedef vector<int> vi; 
//#define rep(i,n,m) for( int i = (int)(n), _m = (int)(m) ; i < _m ; ++i ) 
//#define rrep(i,n,m) for( int i = (int)(n), _m = (int)(m) ; i >= _m ; --i ) 
//#define all(v) v.begin(),v.end() 
//#define rall(v) v.rbegin(),v.rend() 
//#define sz size() 
//#define pb(x) push_back(x) 
//#define mp make_pair 
//#define mems(arr, v) memset(arr, v, sizeof arr) 
//#define setb(mask, bit) ((mask)|((1LL)<<(bit))) 
//#define resetb(mask, bit) ((mask)&(~((1LL)<<(bit)))) 
//#define is0(mask, bit)(((mask)&((1LL)<<(bit)))==0) 
//#define is1(mask, bit)(((mask)&((1LL)<<(bit)))!=0) 
//#define INT_MAX  2000000000 
//#define INT_MIN -INT_MAX 
//#define EPS 1e-9 
//#define debug(x) cout << #x << " : " << x << endl 
//typedef long long ll; 
//typedef long double ld; 
//typedef unsigned long long ull; 
//#define Read() freopen("input.in","r",stdin) 
//#define Write() freopen("output.out","w",stdout) 
//
////--------------------------------------------------------------------- 
//int F[1000009];
//
//void fail(char* pat)
//{
//	int m=strlen(pat);
//	int i,j;
//	F[0]=F[1]=0;
//	for(i=2;i<=m;i++)
//	{
//		j=F[i-1];
//		while(1)
//		{
//			if(pat[j]==pat[i-1])
//			{F[i]=j+1;break;}
//			if(j==0)
//			{F[i]=0;break;}
//			j=F[j];
//		}
//	}
//
//}k
//
//char str[1000009];
//
//int main() 
//{ 
//	Read();
//	
//	int n,t,kase=0;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",&n);
//		scanf("%s",&str);
//		printf("Test case #%d\n",++kase);
//
//		fail(str);
//
//		for(int i = 2 ; i<=n ; i++)
//		{
//			if(i%(i-F[i])==0 && F[i])
//				printf("%d %d\n",i,i/(i-F[i]));
//				
//		}
//		if(t)putchar('\n');
//	}	
//	return 0;
//} 
