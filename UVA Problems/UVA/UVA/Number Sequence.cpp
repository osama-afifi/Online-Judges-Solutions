#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;
int block[11];
int start[11];
int N,rem,pos,res,dig,block_no,c;
	stringstream ss;
	string text;
int digit(int N)
{

		if(N<10)
		{
			printf("%d\n",N);
				return N;
		}
		 c=0;
		while(N>block[c++]);
	 block_no=--c;

		 rem = N-block[block_no-1];
		 pos= rem/(block_no);
		if(pos*block_no==rem)pos--;
		 res=start[block_no-1]+pos;
		ss.clear();
		ss<<res;
		ss>>text;
		printf("%c\n",text[((rem%block_no)? rem%block_no : block_no)-1]);

}


int main()
{
	block[0]=0;
	for(int i=1;i<11;i++)
		block[i]=block[i-1]+i*9*pow(10,(double)i-1);
	start[0]=0;
	for(int i=1;i<11;i++)
		start[i]=pow(10,(double)i);
//////////////////////////////////////

	freopen("input.in","r",stdin);
	


	
	


	return 0;
}