//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//
//using namespace std;
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
//#define Set(a, s) memset(a, s, sizeof (a))
//using namespace std;
//
//set<unsigned long long>S;
//int n;
//char M[10][10];
//int mx[] = {0, 0 , 1 , -1}; 
//int my[] = {1, -1 , 0 , 0};
//
//int solve(int i , int j , int c, unsigned long long bit)
//{
//	//int z = i*j+j;
//	if(c==7)
//	{
//		if(S.find(bit)==S.end())
//		{
//			S.insert(bit);
//			return 1;
//		}
//		return 0;
//	}	
//	int sum=0;
//	for(int k = 0 ; k< 4 ; k++)
//	{
//		int nx = i+mx[k];
//		int ny = j+my[k];
//		if(nx<0 || nx>=n || ny<0 || ny>=n)
//			continue;
//		int q = nx*n+ny;
//		if( !(bit & 1ULL<<q)  && M[nx][ny]=='X')
//			sum+= solve(nx,ny,c+1, (bit | 1ULL<<q));		
//	}
//	return sum;
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//	int t;
//
//	scanf("%d",&t);
//	while(t--)
//	{
//		S.clear();
//		scanf("%d",&n);
//		FOR(i,0,n)
//			scanf("%s",&M[i]);
//		int sum = 0;
//
//		FOR(i,0,n)
//			FOR(j,0,n)
//			if(M[i][j]=='X')
//			{
//				int z = i*n+j;
//				sum += solve(i,j,0,1ULL<<z);
//			}
//			printf("%d\n",sum);
//	}
//
//	return 0;
//}
