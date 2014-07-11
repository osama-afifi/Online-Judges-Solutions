# include <iostream>

using namespace std;
int N;

int xmove[]={0,1,-1,0};
int ymove[]={-1,0,0,1};
char MAP[11][11];
bool inRange(int x , int y)
{
	if(x>=0 &&y >=0 && x<N && y<N)return true;
	return false;
}

bool isSmallest(int x , int y , char ch)
{
	for(int k=0;k<4;k++)
	{
		if(!inRange(x+xmove[k],y+ymove[k]) || (ch>=MAP[x+xmove[k]][y+ymove[k]] && MAP[x+xmove[k]][y+ymove[k]]!='.') )return false;
		return true;
	}
}
int main()
{
	freopen("input.in","r",stdin);

	int kase=0,t;

	cin>>t;
	while(t>0)
	{
		cin>>N;
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				cin>>MAP[i][j];

		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
			{
				bool done=false;
				char ch = 'A';
				while(!done)
				{
					if(MAP[i][j]=='.' && isSmallest(i,j,ch))
					{	
						MAP[i][j]=ch;
						done=true;
						break;
					}
					ch++;
				}
			}

			cout<<"Case "<<++kase<<":"<<endl;
			for(int i=0;i<N;i++){
				for(int j=0;j<N;j++)
				{
					cout<<MAP[i][j];
				}
				cout<<endl;
			}

			t--;
	}
	return 0;
}