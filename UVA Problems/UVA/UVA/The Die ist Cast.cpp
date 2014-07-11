# include <iostream>
# include <cstring>
# include <cstdlib>
# include <math.h>
# include <algorithm>
# include <stdio.h>


using namespace std;
int h,w,dices,counter,kase=1;

char MAP[51][51];
bool VIS[51][51];
bool VISDOT[51][51];

int dice[51];

int movex[]={1,-1,0,0};
int movey[]={0,0,-1,1};

bool inRange(int x , int y)
{
	return (x<h && y <w && x>=0 && y>=0) ? true : false;
}
void solve (int x, int y );
void dot(int x, int y )
{
	for(int i=0 ; i<4 ; i++)
	{
		if ( inRange( x+movex[i],y+movey[i]) && !VISDOT[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]=='X' )
		{
			VISDOT[x+movex[i]][y+movey[i]]=true;
			dot(x+movex[i],y+movey[i]);		
		}
		else if ( inRange(x+movex[i],y+movey[i]) && !VISDOT[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]=='*' )
		{
		
		}
	}

}

void solve ( int x, int y  )
{
	for(int i=0 ; i<4 ; i++)
		if( inRange(x+movex[i],y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]!='.' )
		{
			VIS[x+movex[i]][y+movey[i]]=true;
			if(MAP[x+movex[i]][y+movey[i]]=='X' && !VISDOT[x+movex[i]][y+movey[i]]  )
			{
				dot(x+movex[i],y+movey[i]);
				counter++;
			}
				solve(x+movex[i],y+movey[i]);
		}


}

int main()
{
	freopen("input.in","r",stdin);

	while(cin>>h>>w)
	{

		if(h==0 && w==0)break;
		swap(h,w);
		dices=0;

		memset(VIS,false,sizeof(VIS));
		memset(VISDOT,false,sizeof(VISDOT));

		for(int i = 0 ; i< h ; i++)
			for(int j = 0 ; j< w ; j++)
				cin>>MAP[i][j];


		for(int i = 0 ; i< h ; i++)
			for(int j = 0 ; j< w ; j++)
				if((MAP[i][j]=='*' || MAP[i][j]=='X'  ) && !VIS[i][j] && !VISDOT[i][j])
				{				
					counter=0;
					/*VIS[i][j]=true;*/
					solve(i,j);
					
					dice[dices++]=counter;				
				}
				//else if(MAP[i][j]=='X' && !VIS[i][j])
				//{
				//
				//}
					
				sort(dice,dice+dices);

				printf("Throw %d\n",kase++);

				printf("%d",dice[0]);

				for(int i=1;i<dices;i++)
					printf(" %d",dice[i]);

					printf("\n\n");

	}
	return 0;
}