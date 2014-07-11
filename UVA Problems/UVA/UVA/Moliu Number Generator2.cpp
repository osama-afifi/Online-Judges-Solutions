//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//
//int target;
//map<int,int>M;
//
//int solve(int no)
//{
//	if(no==target)return 0;
//	if(no<target)
//	return min( solve(2*no) , solve(no+1) )+1;
//	else if(no<target)
//		return solve(no-1)+1;
//
//}
//
//int main()
//{
//	freopen("input.in","r",stdin);
//
//	while(scanf("%d",&target)==1)
//	{
//		M.clear();
//		if(target==0)
//			puts("0");
//		else
//	printf("%d\n",solve(1)+1);
//	}
//return 0;
//}