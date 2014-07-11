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

int m,n;
int movex[]={1,-1,0,0,1,1,-1,-1};
int movey[]={0,0,-1,1,1,-1,1,-1};

bool inRange(int x , int y)
{
	return (x<h && y <w && x>=0 && y>=0) ? true : false;
}



void solve (int x, int y )
{
	for(int i=0 ; i<8 ; i++)
		if( inRange(x+movex[i],y+movey[i]) && !VIS[x+movex[i]][y+movey[i]] && MAP[x+movex[i]][y+movey[i]]=='W' )
		{
			VIS[x+movex[i]][y+movey[i]]=true;
	counter++;
				solve(x+movex[i],y+movey[i]);
								
			
		}


}

int main()
{
	freopen("input.in","r",stdin);
	int t;
	scanf("%d",&t);
	cin.ignore(2);
	while(t--)
	{

		memset(VIS,false,sizeof(VIS));

		string text;
		int max=0;
		bool br = false;
		w=0,h=0;
		while(getline(cin,text))
		{  

			if(text=="")
				break;

if(isdigit(text[0]))break;

			w=text.length();

			for(int i=0;i<w;i++)
				MAP[h][i]=text[i];
			h++;
			
		}

		stringstream ss;

		do
		{ 

			if(text=="")
				break;

			ss.clear();
			ss<<text;
			ss>>m>>n;
			memset(VIS,false,sizeof(VIS));
			counter=0;
			if(MAP[m-1][n-1]=='W' && m>0 && n>0 && m-1<h && n-1<w )
			{
				counter++;
				VIS[m-1][n-1]=true;
			solve(m-1,n-1);
			}
			printf("%d\n",counter);
		}while(getline(cin,text));
	
		memset(MAP,0,sizeof(MAP));

		if(t)printf("\n");

	}
	return 0;
}