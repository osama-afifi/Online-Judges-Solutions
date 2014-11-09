//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<cstring>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<queue>
//#include<set>
//#include<stack>
//#include<math.h>
//
//
//#define FOR(i, a, b) for( LL i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//bool arr[1000009];
//
//int main(int argc, char const *argv[])
//{
//	ios_base::sync_with_stdio(0);
//	freopen("input.in", "r" , stdin);
//
//	LL n;
//	while(cin>>n)
//	{
//		Set(arr,0);
//
//		LL maxi = 0;
//		FOR(i,0,n)
//		{
//			LL num;
//			cin >> num;
//			arr[num] = 1;
//		}
//		for (LL i = 1000000; i>1 ; i--)
//		{
//			if (arr[i]>0)
//			{
//				LL mid = i/2;
//				while (arr[mid])
//				{
//					maxi = max(maxi, (i%mid));	
//					mid++;
//				}
//				mid = i/2;
//				if(arr[mid+1])
//				{
//					maxi = max(maxi, (i%(mid+1)));
//					mid++;
//				}
//				mid = i/2;
//				while (arr[mid-1])
//				{
//					maxi = max(maxi, (i%(mid-1)));	
//					mid--;
//				}
//			}
//		}
//
//
//		cout << maxi <<endl;;
//	}
//	return 0;
//}
