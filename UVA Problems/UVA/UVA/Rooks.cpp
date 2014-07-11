
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <sstream>

using namespace std;

int exist[20][20];

bool inRange(int x)
{
	if(x>=0 && x<15)return false;
	return true;
}

int Counter(int x , int y)
{
	int counter=0;
	//if(exist[x][y]==1)
	//	counter++;
	for(int i=0;i<15;i++)
	{
		if(exist[x][i]==1 && i!=y)
			counter++;
		if(exist[i][y]==1 && i!=x)
			counter++;
	}
	return counter;
}

void place(int x , int y)
{
	for(int i=0;i<15;i++)
	{
		exist[x][i]=2;
		exist[i][y]=2;	
	}
}


int main()
{		

	freopen("input.in","r",stdin);
	string text;

	while(text!="END")
	{
		memset(exist,0,sizeof(exist));
		if(text=="END")break;

		int count=0;
		int max=-1;
		int xindex;
		int yindex;
		int pieces=0;
		for(int i=0;i<15;i++)
		{
			pieces=0;
			getline(cin,text);
			if(text=="END")break;

			if(text=="")
			{
				i=-1;
				memset(exist,false,sizeof(exist));
				continue;
			}


			for(int j=0;j<text.length();j++)
			{
				if(text[j]=='#')
					exist[i][j]=1;
			}
		}
		while(max!=0)
		{
			max=0;
			for(int i=0;i<15;i++)
				for(int j=0;j<15;j++)
				{

						if(exist[i][j]!=2)
					count=Counter(i , j);
					if(count>=max){
						max=count;
						xindex=i;
						yindex=j;
					}
				}

				if(max!=0)
				{
					place(xindex,yindex);
					pieces++;
				}
				else break;

		}

		////////////////////////////


		if(text=="END")break;

		cout<<pieces<<endl;
	}
	return 0;
}
