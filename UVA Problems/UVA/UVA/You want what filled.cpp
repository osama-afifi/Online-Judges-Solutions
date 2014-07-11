#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

struct point
{
	int x,y,count;
};

int x,y;

bool inRange(int m ,int n)
{
	if(m>=0 && n>=0 && m<x && n<y)
		return true;
	return false;
}

bool cmp(pair<char , int> a, pair<char , int> b)
{
	if(a.second>b.second)return true;
	else if((a.second==b.second))
	{
		if((a.first<b.first))return true;
	}
	return false;
}

int move_x[]={0,0,-1,1};
int move_y[]={1,-1,0,0};


char MAP[50][50];
bool VIS[50][50];

int Counter=0;

void solve(int a, int b)
{
	
	for(int k=0;k<4;k++)
	{
		if( VIS[a+move_x[k]][b+move_y[k]]==false && inRange(a+move_x[k],b+move_y[k])==true  && MAP[a+move_x[k]][b+move_y[k]]==MAP[a][b] )
		{
			Counter++;
			VIS[a+move_x[k]][b+move_y[k]]=true;
			solve(a+move_x[k],b+move_y[k]);
		
		}
		
	}
}

int main()
{
	freopen("input.in","r",stdin);

	int kase=1;

	while(cin>>x>>y)
	{
		if(x==0 && y==0)break;
		memset(VIS,false,sizeof(VIS));
		Counter=1;

		vector< pair <char,int> > V;

		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
				cin>>MAP[i][j];


		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
				if(MAP[i][j]!='.' && !VIS[i][j])			
				{
					Counter=0;
					solve(i,j);
					VIS[i][j]=true;
					if(Counter==0)
						Counter++;
						pair <char,int> temp2;
						temp2.first=MAP[i][j];
						temp2.second=Counter;
						V.push_back(temp2);

				}

				cout<<"Problem "<<kase++<<":"<<endl;

				sort(V.begin(),V.end(),cmp);
				for(int i=0;i<V.size();i++)
					cout<<V[i].first<<" "<<V[i].second<<endl;

	}

	return 0;
}