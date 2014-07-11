#include <iostream>
#include <cstring>
#include <cstring>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>


using namespace std;

struct point
{
	int x,y,count;
};
int H,W;
bool inRange(int x ,int y)
{
	if(x>=0 && y>=0 && x<H && y<W)
		return true;
	return false;
}	

bool cmp(pair<char,int> x ,pair<char,int> y)
{
	if(x.second > y.second)return true;
	else if(x.second == y.second)
	{
		if(x.first > y.first)return false;
		else return true;
	}
	else return false;

}


int main()
{
	freopen("input.in","r",stdin);

	int move_x [] = {0,0,1,-1};
	int move_y [] = {-1,1,0,0};


	int t,kase=1;
	cin>>t;

	char MAP[500][500];
	bool VIS[500][500];
	while(t>0)
	{
		cin>>H>>W;
		memset(VIS,false,sizeof(VIS));


		map <char,int> LIST;
		map <char,int> ::iterator it;
		vector < pair<char,int> > V;
		vector < pair<char,int> > iter;

		for(int i=0;i<H;i++)
			for(int j=0;j<W;j++)
				cin>>MAP[i][j];

		stack <point> S;

		for(int i=0;i<H;i++)
			for(int j=0;j<W;j++)
			{
				if(!VIS[i][j])
				{

					point start ={i,j,0};
					S.push(start);
					point current;
					while(!S.empty())
					{
						current=S.top();

						S.pop();
						for(int k=0;k<4;k++)
						{
							if(inRange(current.x+move_x[k],current.y+move_y[k]) && !VIS[current.x+move_x[k]][current.y+move_y[k]] && MAP[current.x][current.y]== MAP[current.x+move_x[k]][current.y+move_y[k]])
							{
								VIS[current.x+move_x[k]][current.y+move_y[k]]=true;
								point temp = {current.x+move_x[k],current.y+move_y[k]};
								S.push(temp);
							}
						}


					}
					LIST[MAP[i][j]]++;

				}





			}
			cout<<"World #"<<kase++<<endl;

			for(it=LIST.begin();it!=LIST.end();it++)
			{
				pair<char,int> temp;
				temp.first=it->first;
				temp.second=it->second;
				V.push_back(temp);

			}

			sort(V.begin(),V.end(),cmp);

			for(int i=0;i<V.size();i++)
				cout<<V[i].first<<": "<<V[i].second<<endl;

			t--;
	}



	return 0;
}