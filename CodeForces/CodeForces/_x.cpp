		//if(2*arr[1]<=arr[2])
		//	x = arr[1];
		//else 
		//	x = arr[2]/2; 
		//
		//arr[1] = arr[1]-x;
		//arr[2] = arr[2] - 2*x;
		//if(arr[1]==0 && arr[2] == 0)
		//{
		//	cout<<a1+x<<endl;
		//	continue;
		//}
		//if(arr[1] == 0 && arr[2] >=3)
		//{
		//	if(arr[2]/3<=a1)
		//		b = arr[2]/3;
		//	else b = a1;
		//	arr[2] -= 3*b;
		//}


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

int main() 
{
	ios_base::sync_with_stdio(0);
	freopen("input.in", "r" , stdin);
	LL arr1[5];
	LL arr2[5];
	LL arr3[5];
	while(cin>>arr1[0]>>arr1[1]>>arr1[2])
	{
		sort(arr1,arr1+3);
		FOR(i,0,3)arr3[i]=arr2[i]=arr1[i];

	LL maxi=0;
		{	
		LL x1;
		x1 = arr1[0];
		arr1[0] = 0;
		arr1[1] = arr1[1] - x1;
		arr1[2] = arr1[2] - x1;

		LL z1 = min(((arr1[1])/2),arr1[2]);
		LL z2 = min(((arr1[2])/2),arr1[1]);
		LL z3 = max(z1,z2);
		maxi = max(maxi,x1+z3);
		}

		{	
		LL x1;
		x1 = arr2[0];
		arr2[0] = 0;
		arr2[1] = arr2[1] - 2*x1;
		if(arr2[1]<0)goto NEXT;
		arr2[2] = arr2[2];

		LL z1 = min(((arr2[1])/2),arr2[2]);
		LL z2 = min(((arr2[2])/2),arr2[1]);
		LL z3 = max(z1,z2);
		maxi = max(maxi,x1+z3);
		}
		NEXT:
		{	
		LL x1;
		x1 = arr3[0];
		arr3[0] = 0;
		arr3[1] = 0;
		arr3[2] = arr3[2] - 2*x1;
		if(arr3[2]<0)goto RESULT;

		LL z1 = min(((arr3[1])/2),arr3[2]);
		LL z2 = min(((arr3[2])/2),arr3[1]);
		LL z3 = max(z1,z2);
		maxi = max(maxi,x1+z3);
		}

		RESULT:

		cout<< maxi <<endl;
	}
	return 0;
}