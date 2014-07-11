#include<iostream>
#include<algorithm>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <queue>

#define FOR(i, a, b) for( int i = (a); i < (b); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
using namespace std;

int dist(string s1 , string s2)
{
	int d=0;
	for(int i = 0 ; i<4 ; i++)
		d+=min(abs(s1[i]-s2[i]) , 10-(abs(s1[i]-s2[i])) );
	return d;
}
string arr[509];
int d[509][509];


struct Edge
{
	int n1,n2,w;

	bool operator < (const Edge a)const
	{
		return a.w>w;
	}

};

Edge road[100009];

int cmp(const void*a,const void*b)
{
	return ((Edge*)a)->w-((Edge*)b)->w;
}


int n;

int forest[100009];

int getForest(int i)
{
	if(i==forest[i])
		return i;
	else
		return forest[i]=getForest(forest[i]);
}

bool isUnion(int a,int b)
{
	return (getForest(a)==getForest(b));
}

void makeUnion(int a,int b)
{
	forest[getForest(a)] = getForest(b);
}

int main()
{
	freopen("input.in","r",stdin);
	int t;
	int n;

	string s;
	cin>>t;
	while(t--)
	{
		

		cin>>n;
				for(int i=0;i<=n;i++)
			forest[i]=i;
		
				arr[0]="0000";
		FOR(i,1,n+1)
		{
			cin>>s;
			arr[i]=s;
		}

		int index=0;

		FOR(i,0,n+1)
			FOR(j,i+1,n+1)
		{
			road[index].n1=i;
			road[index].n2=j;
			road[index].w=dist(arr[i],arr[j]);
			index++;
		}

		sort(road,road+index);
			int j=0;
			int res=0;
			bool done=0;
			for(int i =0  ; i<index && j<n ; i++)
			{
				if(done)break;
				if(!isUnion(road[i].n1,road[i].n2))
				{
					makeUnion(road[i].n1,road[i].n2);
					done=1;
					res+=road[i].w;
					j++;
				}
			}
			printf("%d\n",res);
	}

	return 0;
}