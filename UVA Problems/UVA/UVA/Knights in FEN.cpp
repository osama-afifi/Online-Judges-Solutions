//The Accepted Sol

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cstring>


struct board
{
	int x,y,counter;
	char B[5][5];

};

const char target_arr[5][5] =
{ { '1' , '1' , '1' , '1' , '1' } ,
{ '0' , '1' , '1' , '1' , '1' } ,
{ '0' , '0' , ' ' , '1' , '1' } ,
{ '0' , '0' , '0' , '0' , '1' } ,
{ '0' , '0' , '0' , '0' , '0' } };


int moveX[] = {-2, -1, -2, -1, 1, 2, 1, 2};
int moveY[] = {-1, -2, 1, 2, -2, -1, 2, 1};
char start [5][5];
int vis[5][5];
short k,l;
bool reached (char B[5][5])
{
	for( k=0;k<5;k++)
		for( l=0;l<5;l++)
			if(B[k][l]!=target_arr[k][l])
				return false;
	return true;
}

bool inRange(int x , int y)
{
	if(x<0 || x>4 ||  y<0 || y>4)return false;
	return true;

}
bool found = false;


using namespace std;

int main()
{
	memset(vis,false,sizeof(vis));
	freopen("input.in","r",stdin);
	int t;
	cin>>t;

	cin.ignore();
	while(t>0)
	{
		memset(vis,0,sizeof(vis));
		found = false;
		int ex,ey;
		string text;

		board start ;
		for(int i=0 ; i<5; i++)
		{
			getline(cin,text);
			for(int j=0 ; j<5; j++)
			{
				start.B[i][j]=text[j];
				if(text[j]==' ')
				{
					ex=i;
					ey=j;
				}
			}
		}


		queue <board> BFS;

		start.x=ex;
		start.y=ey;
		start.counter=0;

		BFS.push(start);

		////
		board current;
		while(!BFS.empty())
		{
			current=BFS.front();

			if(current.counter>10)break;
			else if(current.B[2][2]==' ' && reached(current.B) )
			{
				found = true;
				break;
			}
			BFS.pop();

			for(int i=0;i<8;i++)
			{
				if(inRange(current.x+moveX[i],current.y+moveY[i]))
				{
					swap( current.B[current.x+moveX[i]][current.y+moveY[i]] , current.B[current.x][current.y] );

					current.x+=moveX[i];
					current.y+=moveY[i];
					current.counter++;

					BFS.push(current);				
					
					current.x-=moveX[i];
					current.y-=moveY[i];
					current.counter--;
					swap( current.B[current.x+moveX[i]][current.y+moveY[i]] , current.B[current.x][current.y] );
					
				}
			}

		}

		if(found)
			cout<<"Solvable in "<<current.counter<<" move(s)."<<endl;
		else
			cout<<"Unsolvable in less than 11 move(s)."<<endl;

		t--;
	}



	return 0;
}