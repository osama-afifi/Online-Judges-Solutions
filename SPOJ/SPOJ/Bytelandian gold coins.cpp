//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//#include <queue>
//#include <vector>
//#include <limits>
//#include <stdio.h>
//
//using namespace std;
//
//int const oo = 1<<25;
//
//map <int , long long> M;
//
//long long solve(long long n)
//{
//	if(!n)return 0;
//
//		if(M.find(n)!=M.end())
//		return M[n];
//	else
//		return M[n] = max(n ,solve(n/2)+solve(n/3)+solve(n/4));
//}
//
//
//int main()
//{
//
//	freopen("input.in","r",stdin);
//	unsigned long long  n;
//
//	while(scanf("%lld",&n)!=EOF)
//	{
//		M.clear();
//		printf("%lld\n",solve(n));
//	}
//	return 0;
//}
