#include <stdio.h>

int i,N,num,Q, Monkey[50005],low,high,mid,prev,temp;
int main()
{ 
	freopen("input.in","r",stdin);

	 
	
	scanf ("%d",&N); 
	for(i=0;i<N;i++)
		scanf ("%d",&Monkey[i]); 

	scanf ("%d",&Q); 

	for(i=0;i<Q;i++)
	{
		scanf ("%d",&num); 
		//////Binary Search///////
		 low=0;
		 high=N-1;
		 mid;
		 prev=0;
		while(true)
		{
			mid=(low+high)/2;
			if(prev==mid)break;
			if(Monkey[mid]==num)break;
			if(Monkey[mid]>num)			
				high=mid--;
			else
				low=mid++;
			prev=mid;

		}
		///////////////////////////
		temp=mid+1;

		while(num<=Monkey[temp])
		{
			temp--;
			if(temp==-1)break;
		}

		if(temp==-1)
			printf ("X ");

		else if (num>Monkey[temp])
			printf ("%d ",Monkey[temp]);
			
		else printf ("X ");

		temp=mid;

		while(num>=Monkey[temp])
		{
			temp++;
			if(temp==N)break;
		}

		if(temp==N)
			printf ("X\n");

		else if (num<Monkey[temp])
			printf ("%d\n",Monkey[temp]);

		else printf ("X\n");
	}


	return 0;
}