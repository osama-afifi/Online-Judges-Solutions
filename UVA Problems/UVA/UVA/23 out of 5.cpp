
#include <stdio.h>
#include <algorithm>

using namespace std;


int no[7],i;
bool b;
void back(int index,int value)
{

	if(value==23 && index==4){
		b=true;
		return;
	}

	if(index<4)
	{		
		back(index+1,value*no[index+1]);
		back(index+1,value+no[index+1]);	
		back(index+1,value-no[index+1]);		
	}
	return;
}

int main()
{
	freopen("input.in","r",stdin);
	while(scanf("%d",&no[0]))
	{
		for(i=1;i<5;i++)
			scanf("%d",&no[i]);

		if(no[0]==0 && no[1]==0 && no[2]==0 && no[3]==0 && no[4]==0)break;
		sort(no,no+5);
		b=false;
		do
		{	
			back(0,no[0]);
			if(b)break;
		}while(next_permutation(no,no+5));

		if(b)
			printf("Possible\n");		
		else
			printf("Impossible\n");

	}
	return 0;
}