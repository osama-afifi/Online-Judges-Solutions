
# include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int counter;
int cmp(const void *a, const void *b)
{
	counter++;
	return *(int *)a - *(int *)b;
}

int main()
{

	freopen("input.in","r",stdin);

	int t;

	int S;
	int A;
	int F;

	cin>>t;

	while(t>0)
	{
		counter=0;
		cin>>S>>A>>F;

		int street[50000];
		int avenue[50000];
		int sum_s=0;
		int sum_a=0;
		int avg_s=0;
		int avg_a=0;

		for(int i=0; i<F ; i++)
		{
			cin>>street[i];
			cin>>avenue[i];
		}

		qsort(street, F, sizeof(int), cmp);
		qsort(avenue, F, sizeof(int), cmp);

		if(F%2==0)F--;

		/*cout<<"(Street: "<<street[F/2]<<", Avenue: "<<avenue[F/2]<<")"<<endl;*/
		cout<<counter<<endl;
		t--;
	}

	return 0;
}