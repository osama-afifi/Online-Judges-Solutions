//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <cstring>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//long long target;
//
//
//long long solve(long long  no)
//{
//	if(no==0)return 0;
//	if(no==1)return 1;
//
//	if(no&1)
//	return min( solve(no-1) , solve(no+1) )+1;
//	else return solve(no/2)+1;
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%lld",&target)==1)
//	{
//		if(target==0)
//			puts("0");
//		else
//	printf("%lld\n",solve(target));
//	}
//return 0;
//}