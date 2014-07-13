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
//#define ALL(A) (A.begin(), A.end())
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//int n,m;
//int arr[3000009];
//vector<int>l0;
//vector<int>l1;
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	while(cin>>n>>m)
//	{
//		l0.clear();
//		l1.clear();
//		int beg0 = 0;
//		int beg1 = 0;
//		FOR(i,0,m)
//		{
//
//			cin>>arr[i];
//			if(arr[i]==0)
//				l0.push_back(i);
//			else if(arr[i]==1)
//				l1.push_back(i);
//		}
//
//		int beg = 0;
//		int c;
//		int len = m;
//		FOR(i,0,n)
//		{
//			cin>>c;
//			if(c==-1)
//			{
//				if(beg<m)
//				{
//					int b = beg  , e = m-1 , res = m;
//					int v = len-beg;
//					if(b<=m)
//					{
//
//						while(b<=e)
//						{
//							int mid = (b+e)>>1;
//							if(arr[mid]<=v)
//								b = mid+1 , res = mid;
//							else
//								e = mid-1;
//						}
//						beg = res+1;
//					}
//					if(res==m && arr[beg0]<=v)
//					{
//						//beg0 = (int)(upper_bound(l0.begin()+beg0, l0.end(), v)-l0.begin());
//						//beg1 = (int)(upper_bound(l1.begin()+beg1, l1.end(), v)-l1.begin());
//					}
//				}
//			}
//			else if(c==0)
//			{
//				arr[len] = 0;
//				l0.push_back(len);
//				++len;
//			}
//			else if(c==1)
//			{
//				arr[len] = 1;
//				l1.push_back(len);
//				++len;
//			}
//
//		}
//
//	}
//
//
//	return 0;
//}