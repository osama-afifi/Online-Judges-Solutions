#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

struct POS
{
	int x,y,count;
};

int m,n;

int move_x[]={-1,-1,-1,0,0,1,1,1};
int move_y[]={-1,0,1,1,-1,-1,0,1};
string text;
char MAP[51][51];
bool found=false;

bool inRange(int a , int b)
{
	if(a>=0 && b>=0 && a<m && b<n)return true;
	else return false;
}
int k;
void solve(int x,int y, int index)
{
	if(index==text.length()-1){
		found=true;
		return;
	}
	else if(index>text.length()-1)
		return;


	if(  inRange(x+move_x[k],y+move_y[k]) && tolower(MAP[x+move_x[k]][y+move_y[k]])==tolower(text[index+1]))		
		solve(x+move_x[k],y+move_y[k],index+1);

	else return ;

}

int main()
{
	freopen("input.in","r",stdin);



	int t;
	cin>>t;
	while(t>0)
	{
		char ch;

		cin>>m>>n;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			{
				cin>>ch;
				MAP[i][j]=tolower(ch);

			}
			int names;
			cin>>names;

			for(int q=0;q<names;q++)
			{
				cin>>text;

				found=false;

				for(int i=0;i<m;i++)
				{
					if(found)break;

					for(int j=0;j<n;j++)
					{

						if(MAP[i][j]==tolower(text[0]))
						{
							for(k=0;k<8;k++){
								solve(i,j,0);
								if(found)break;
							}
							if(found)
								printf("%d %d\n",i+1,j+1);
								//cout<<i+1<<" "<<j+1<<endl;
						}
						if(found)break;
					}
				}
			}
			if(t!=1)
				printf("\n");
			t--;
	}
	return 0;
}