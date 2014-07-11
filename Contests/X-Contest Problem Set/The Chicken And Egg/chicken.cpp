/* 
	This is a trivial dynamic programming solution. There might be a greedy solution but I didn't get a chance 
	to investigate.
*/ 

#include <iostream>
#include <fstream>
using namespace std;


//the best 
int sol[1002][10002];


void main()
{
	int nChicken,nDays,eggPrice;
	int chickenPrice[10000],maxChicken[10000];

	ifstream fin("chicken.in");

	while(fin>>nDays)
	{
		fin>>nChicken>>eggPrice;

		int i,j;
		for(j=0;j< nDays;j++)
		{
			fin>>chickenPrice[j]>>maxChicken[j];
		}

		for(i=0;i<=nChicken;i++)
		{
			sol[i][nDays] = 0;
		}

		for(j = nDays -1 ; j >=0 ;j--)
		{
			sol[0][j] = 0;
			for(i = 1; i<=nChicken; i++)
			{
				int k = 0;
				int maxPrice = 0;
				for(k =0 ; k<=i && k<=maxChicken[j] ; k++)
				{
					maxPrice = max(maxPrice, i *eggPrice + sol[i-k][j+1] + k*chickenPrice[j]);
				}

				sol[i][j] = maxPrice;
			}
		}

		cout<<sol[nChicken][0]<<endl;
	}
}