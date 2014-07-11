#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

struct POS
{
	int x,y,counter;
};
int main ()
{
	freopen("input.in","r",stdin);
	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		char MAP[105][105];
		bool DANGER[102][102]={false};
		bool VIS[102][102]={false};
		int m,n;
		int horse_x[]={-1,-1,-2,-2,1,1,2,2};
		int horse_y[]={-2,2,-1,1,-2,2,-1,1};
		cin>>m>>n;

		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)	
				cin>>MAP[i][j];

		int sx,sy,tx,ty;

		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)	
			{
				if(MAP[i][j]=='Z')
				{
					DANGER[i][j]=true;
					for(int k=0;k<8;k++)
					{
						if( (i+horse_x[k]>=0) && (j+horse_y[k]>=0) &&(MAP[i+horse_x[k]][j+horse_y[k]])!='B' &&(MAP[i+horse_x[k]][j+horse_y[k]])!='A' )
							DANGER[i+horse_x[k]][j+horse_y[k]]=true;
					}
				}
				if(MAP[i][j]=='A')
				{
					sx=i;
					sy=j;
				}
				if(MAP[i][j]=='B')
				{
					tx=i;
					ty=j;
				}
			}

			int king_moves_X[] = {-1,-1,-1,0,0,1,1,1};
			int king_moves_Y[] = {1,-1,0,1,-1,1,-1,0};
			/////////////////////////////////////////
			queue<POS> KING;

			POS A;
			A.x=sx;
			A.y=sy;
			A.counter=0;
			KING.push(A);
			POS current;
			bool reached = false;
			while(!KING.empty())
			{
				current=KING.front();
				if(current.x==tx && current.y==ty)
				{
					reached = true;
					break;
				}
				
				KING.pop();
				for(int i=0;i<8;i++)
				{

					if(current.x+king_moves_X[i]>=0 &&current.y+king_moves_Y[i]>=0 && current.x+king_moves_X[i]<m &&current.y+king_moves_Y[i]<n)
					{
						if(VIS[current.x+king_moves_X[i]][current.y+king_moves_Y[i]]==false && DANGER[current.x+king_moves_X[i]][current.y+king_moves_Y[i]]==false)
						{
							POS temp;
							temp.x=current.x+king_moves_X[i];
							temp.y=current.y+king_moves_Y[i];
							temp.counter=current.counter+1;
							KING.push(temp);
							VIS[current.x+king_moves_X[i]][current.y+king_moves_Y[i]]=true;
						}
					}
				}
			}
			if(reached)
				cout<<"Minimal possible length of a trip is "<<current.counter<<endl;
			else
				cout<<"King Peter, you can't go now!"<<endl;

			t--;
	}
	return 0;
}