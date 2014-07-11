#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>


using namespace std;
int bin[9];
int count(int x , int y , int z)
{
	int sum=0;
	for(int i=0;i<9;i++)
	{
		if(i!=x && i!=y && i!=z)
			sum+=bin[i];
	}
	return sum;
}

// B 0 3 6
// G 1 4 7
// C 2 5 8

int main()
{
	freopen("input.in","r",stdin);

	string msg[] = {"BCG","BGC","CBG","CGB","GBC","GCB"};
	int moves[6];

	while(scanf("%d",&bin[0]) !=EOF)
	{
		int min=2147483647;
		for(int i=1;i<9;i++)
			scanf("%d",&bin[i]);

		moves[0]=count(0, 5, 7);
		moves[1]=count(0, 4, 8);
		moves[2]=count(2, 3, 7);
		moves[3]=count(2, 4, 6);
		moves[4]=count(1, 3, 8);
		moves[5]=count(1, 5, 6);
		int index;
		for(int i=0;i<6;i++)
		if(moves[i]<min)
		{
		min=moves[i];
		index=i;
		}

		cout<<msg[index]<<" "<<moves[index]<<endl;
	}
	return 0;
}