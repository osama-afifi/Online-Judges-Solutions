# include <iostream>
# include <cstring>
# include <cstdlib>
# include <sstream>
# include <math.h>
# include <algorithm>
# include <stdio.h>
# include <string>

using namespace std;
int h,w,counter,kase=1;

char MAP[111][111];
bool VIS[111][111];
bool SEE[111][111];
int maxi=0;
int m,n;
int movex[]={-1,0,1,0,1,1,-1,-1};
int movey[]={0,1,0,-1,1,-1,1,-1};

bool inRange(int x , int y)
{
	return (x<h && y <w && x>=0 && y>=0) ? true : false;
}



void solve (int x, int y ,int index)
{
	if(index>maxi)
		maxi=index;
		for(int j=0; j<4 ; j++)
			if(inRange(x+movex[j], y+movey[j]))
				SEE[x+movex[j]][y+movey[j]]=true;

	for(int i=0 ; i<4; i++)
		if( inRange(x+movex[i], y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]=='0' )
		{
			VIS[x+movex[i]][y+movey[i]]=true;
			counter++;
			solve(x+movex[i],y+movey[i],index+1);
			break;
		}
		
}

void out()
{
	for(int i=0; i<4*w ; i++)
		if(i%4==0)
			printf("|");
		else
			printf("-");
	printf("|\n");
}

int main()
{
	freopen("input.in","r",stdin);
	int sx,sy;
	
	while(scanf("%d%d",&h,&w) != EOF)
	{
		if(h==0 && w==0)break;
		counter=0;
		maxi=0;
		scanf("%d%d",&sx,&sy);
		memset(VIS,false,sizeof(VIS));
		memset(SEE,false,sizeof(SEE));

		for(int i = 0 ; i<h ; i++)
			for(int j = 0 ; j<w ; j++)
				cin>>MAP[i][j];
				
			

			VIS[sx-1][sy-1]=true;
			SEE[sx-1][sy-1]=true;

			solve(sx-1,sy-1,0);


			printf("\n");
			out();
			for(int i=0;i<h;i++)
			{
				printf("|");
				for(int j=0;j<w;j++)
					if(SEE[i][j])
						printf(" %c |", MAP[i][j] );
					else
						printf(" ? |");
				printf("\n");

				out();
			}

			printf("\nNUMBER OF MOVEMENTS: %d\n",maxi);
	}
	return 0;
}