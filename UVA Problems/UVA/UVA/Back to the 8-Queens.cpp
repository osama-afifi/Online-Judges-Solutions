#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <cstring>
#include <vector>

using namespace std;

int board[9];
int r,c,solution;


int B [93][8];


bool check(int k)
{
	for(int i=1;i<k;i++)
		if(board[i]==board[k] || abs(board[i]-board[k])==abs(i-k) )
			return false;
	return true;
}

void output()
{
	for(int i=1;i<=8;i++)
		B[solution][i]=board[i];
	solution++;
}
void back(int row)
{
	if(row < 9)
	{
		for (board[row]=1; board[row]<=8; board[row]++)
		{
			if(check(row) || (row==r  && board[row]!=board[r]))
				back(row+1);

		}
	}
	else
		output();
}

int main ()
{


	freopen("input.in","r",stdin);

	memset(board, 0, sizeof(board));
	solution=0;

	back(1);

	int counter=0;

	int given[9];
	int kase=0;
	while(cin>>given[1])
	{
		for(int i=2;i<=8;i++)
			cin>>given[i];
		
		int mini=1000;

		for(int i=0;i<solution;i++)
		{
			counter=0;
			for(int j=1;j<=8;j++)		
				if(given[j]-B[i][j]!=0)
					counter++;

			if(counter<mini)
				mini=counter;
		}

		cout<<"Case "<<++kase<<": "<<mini<<endl;

	}

	return 0;
}
