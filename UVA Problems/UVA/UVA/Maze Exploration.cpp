# include <iostream>
# include <cstring>
# include <cstdlib>
# include <math.h>
# include <algorithm>
# include <stdio.h>


using namespace std;
int kase=1;

char MAP[111][111];
bool VIS[111][111];
int h=0;

int movex[]={1,-1,0,0,1,1,-1,-1};
int movey[]={0,0,-1,1,1,-1,1,-1};

bool inRange(int x , int y)
{
	return (x<h && x>=0 && y>=0) ? true : false;
}




void solve(int x, int y )
{
	MAP[x][y]='#';
	for(int i=0 ; i<8 ; i++)
	{
		if ( inRange( x+movex[i],y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] &&  MAP[x+movex[i]][y+movey[i]]!=0 && MAP[x+movex[i]][y+movey[i]]==' ' )
		{
			VIS[x+movex[i]][y+movey[i]]=true;
			solve(x+movex[i],y+movey[i]);		
		}

	}

}



int main()
{
	freopen("input.in","r",stdin);
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		memset(VIS,false,sizeof(VIS));
		memset(VIS,0,sizeof(MAP));
		h=0;
		while(MAP[h-1][0]!='_')
		{
			cin.getline(MAP[h++], 100, '\n');
		}
		h--;

		for(int i = 0 ; i<h ; i++)
			for(int j = 0 ; MAP[i][j]!=0 ; j++)
				if((MAP[i][j]=='*') && !VIS[i][j] )
				{
					VIS[i][j]=true;
					solve(i,j);
				}
		

		for(int i = 0 ; i<=h ; i++)
					printf("%s\n",MAP[i]);
	
		


	}
	return 0;
}