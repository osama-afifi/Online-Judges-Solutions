# include <iostream>
# include <cstring>
# include <cstdlib>
# include <math.h>
# include <algorithm>
# include <stdio.h>


using namespace std;
int h,counter,kase=1;

char MAP[26][26];
bool VIS[26][26];


int movex[]={1,-1,0,0,1,1,-1,-1};
int movey[]={0,0,-1,1,1,-1,1,-1};

bool inRange(int x , int y)
{
	return (x<h && y <h && x>=0 && y>=0) ? true : false;
}

void eagle(int x, int y )
{
	for(int i=0 ; i<8 ; i++)
	{
		if ( inRange( x+movex[i],y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]=='1' )
		{
			VIS[x+movex[i]][y+movey[i]]=true;
			eagle(x+movex[i],y+movey[i]);		
		}

	}

}



int main()
{
	freopen("input.in","r",stdin);

	while(cin>>h)
	{

		
		
		

		memset(VIS,false,sizeof(VIS));


		for(int i = 0 ; i< h ; i++)
			for(int j = 0 ; j< h ; j++)
				cin>>MAP[i][j];

		counter=0;
		for(int i = 0 ; i< h ; i++)
			for(int j = 0 ; j< h ; j++)
				if((MAP[i][j]=='1' ) && !VIS[i][j] )
				{				
					eagle(i,j);
					{
						VIS[i][j]=true;
						counter++;					
					}
				}



				printf("Image number %d contains %d war eagles.\n",kase++,counter);



	}
	return 0;
}