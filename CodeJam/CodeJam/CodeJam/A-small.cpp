#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define ALL(A) (A.begin(), A.end())
#define Set(a, s) memset(a, s, sizeof (a))
#define pb push_back
#define mp make_pair
typedef long long LL;
using namespace std;

int main() 
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int kase = 0;
	int t;
	cin>>t;
	while(t--)
	{

		vector<int>V;

		int q1,q2;

		cin>>q1;
		int dummy;
		FOR(i,0,4)
			FOR(j,0,4)
		{
			cin>>dummy;
			if(i+1==q1)
				V.push_back(dummy);
		}
		cin>>q2;
		FOR(i,0,4)
			FOR(j,0,4)
		{
			cin>>dummy;
			if(i+1==q2)
				V.push_back(dummy);
		}
	vector<int>V2;
		sort(V.begin(), V.end());
		V2 = V;
		int u = (int)(unique(V2.begin(), V2.end())-V2.begin());

		cout<<"Case #"<<++kase <<": ";

		if(u==8)
			cout<<"Volunteer cheated!"<<endl;
		else if(u==7)
		{
			FOR(j,1,u+1)
				if(V[j-1]==V[j])
				{
					cout << V[j] << endl;
					break;
				}
		}
		else
		{
			cout<<"Bad magician!"<<endl;
		}
	}

	return 0;
}