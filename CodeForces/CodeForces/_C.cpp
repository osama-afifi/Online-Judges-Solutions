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

int n;
LL arr[1000*1000+9];
LL acc[1000*1000+9];

int sum(int i , int j)
{
	if(i>0)
		return acc[j]-acc[i-1];
	return acc[j];
}
int bsu(int b, int e , LL tar)
{
	int x=b,y=e;
	int ret=-1;
	while(b<=e)
	{
		int mid = (b+e)/2;
		if(sum(x,mid)==sum(mid+1,n-1))
			b = mid+1,ret = mid;
		else if(sum(x,mid)<sum(mid+1,n-1))
			b = mid+1;
		else e = mid-1;

	}
	return ret;
}
int bsl(int b, int e , LL tar)
{
	int x=b,y=e;
	int ret=-1;
	while(b<=e)
	{
		int mid = (b+e)/2;
		if(sum(x,mid)==sum(mid+1,n-1))
			e = mid-1,ret = mid;
		else if(sum(x,mid)<sum(mid+1,n-1))
			b = mid+1;
		else e = mid-1;

	}
	return ret;
}

int main()
{
	freopen("input.in", "r" , stdin);


	while(cin>>n)
	{
		FOR(i,0,n)
			cin>>arr[i];

		acc[0]=arr[0];
		FOR(i,1,n)
			acc[i]=acc[i-1]+arr[i];

		if(acc[n-1]%3!=0)
		{
			cout << 0 <<endl;
			continue;
		}

		int target = acc[n-1]/3;

		bool flag=0;
		int a=0,b=n-1;
		int s=arr[a];
		a++;
		while(sum(0,a)!=target)
			s+= arr[a] , a++;


		s=arr[b];
		b--;
		while(s!=target)
			s+=arr[b],b--;
		
		LL res = 0;

		if(a>b || sum(a+1,b)!=target)
		{
			cout << 0 <<endl;
			continue;
		}
		else
		{
			int zeroa=0;
			int zerob=0;
			bool flag1=0;
			bool flag2=0;
			while(arr[a]==0)
				a++,zeroa++,flag1=1;;
			
			while(arr[b]==0)
				b--,zerob++,flag2=1;

			//if(sum(a+!flag1,b)!=target)
			//	res=0;

			if(a>b)
				res += zerob-1;
			else res += (zeroa+1)*(zerob+1);

			cout << res <<endl;
		}
		
	}


	//while(cin>>n)
	//{
	//	LL mini = 1e18;
	//	FOR(i,0,n)
	//	{
	//		cin>>arr[i];
	//		mini = min(mini,arr[i]);
	//	}
	//	//FOR(i,0,n)
	//	//	arr[i]+= -mini;
	//	acc[0]=arr[0];
	//	FOR(i,1,n)
	//		acc[i]=acc[i-1]+arr[i];
	//	LL res=0;
	//	FOR(i,0,n-1)
	//	{
	//		LL x = sum(0,i);
	//		int u= bsu(i+1,n-1,x);
	//		int l= bsl(i+1,n-1,x);
	//		if(u==-1 || l==-1)continue;
	//		res += u-l+1;
	//	}
	//cout <<res <<endl;
	//}

	return 0;
}