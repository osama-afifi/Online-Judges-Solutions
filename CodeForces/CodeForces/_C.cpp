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
//#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
//#define ALL(A) A.begin(), A.end()
//#define Set(a, s) memset(a, s, sizeof (a))
//#define pb push_back
//#define mp make_pair
//typedef long long LL;
//using namespace std;
//
//int main()
//{
//	freopen("input.in", "r" , stdin);
//
//	LL arr[15];
//	while(cin>>arr[0]>>arr[1]>>arr[2])
//	{
//		sort (arr, arr+3);
//		cout<< min((arr[0]+arr[1]+arr[2])/3,arr[0]+arr[1])<<endl;
//
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<queue>
#include<set>
#include<stack>
#include<math.h>


#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) A.begin(), A.end()
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;

using namespace std;
int arr[10009];
int hvis[10009];
int main()
{
	ios_base::sync_with_stdio(0);
	freopen("input.in", "r" , stdin);
	int n,h,l;

	while(cin>>n>>h>>l)
	{
		Set(hvis,0);
		int oo=1<<25;
		FOR(i,0,n)arr[i]=-oo;
		vector<int>H;
		FOR(i,0,h)
		{
			int num;cin>>num;
			H.push_back(num);
			arr[num]=0;
		}

		FOR(i,0,l)
		{
		
			int a,b;
			cin>>a>>b;

			arr[a]=arr[b]+1;
			//arr[b]=arr[a]+1;
		}

		int idx=0;
		FOR(i,0,n)
			if(arr[idx]<arr[i])
				idx=i;
		//FOR(i,0,H.size())
		//	arr[H[i]]=0;

		cout << idx+1 <<endl;

	}


	return 0;
}
