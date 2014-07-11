# include <iostream>
# include <cstring>
# include <cstdlib>
# include <math.h>
# include <algorithm>
# include <stdio.h>


using namespace std;
int h,w,counter,kase=1;

char MAP[111][111];
bool VIS[111][111];


int movex[]={1,-1,0,0,1,1,-1,-1};
int movey[]={0,0,-1,1,1,-1,1,-1};

bool inRange(int x , int y)
{
	return (x<h && y <w && x>=0 && y>=0) ? true : false;
}

void eagle(int x, int y )
{
	for(int i=0 ; i<8 ; i++)
	{
		if ( inRange( x+movex[i],y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]=='@' )
		{
			VIS[x+movex[i]][y+movey[i]]=true;
			eagle(x+movex[i],y+movey[i]);		
		}

	}

}



int main()
{
	freopen("input.in","r",stdin);

	while(cin>>h>>w)
	{

		if(h==0 && w==0)break;

		memset(VIS,false,sizeof(VIS));


		for(int i = 0 ; i< h ; i++)
			for(int j = 0 ; j< w ; j++)
				cin>>MAP[i][j];

		counter=0;
		for(int i = 0 ; i< h ; i++)
			for(int j = 0 ; j< w ; j++)
				if((MAP[i][j]=='@' ) && !VIS[i][j] )
				{				
					eagle(i,j);
					{
						VIS[i][j]=true;
						counter++;					
					}
				}



				printf("%d\n",counter);



	}
	return 0;
}