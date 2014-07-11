////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
using namespace std;

////////////////////////////////////////////////

int main ()
{ freopen("input.in", "r", stdin);
long int N,Q,n[10001],q[10001],kase=1;
while(cin>>N>>Q )
{

	if ((N==0)&&(Q==0))break;

	cout<<"CASE# "<<kase++<<":"<<endl;
	for(int i=0;i<N;i++)
	{cin>>n[i];}

	for(int i=0;i<Q;i++)
	{cin>>q[i];}

	///////////ARRANGING ARRAY (SORTING) --->HERE ASCENDING FOR EXAMPLE//////////////
	for(int i=0;i<N;i++)
		for(int j=1;j<(N-i);j++)
		{
			if (n[i]>n[i+j]) /////Swapping
			{int temp=n[i];
			n[i]=n[i+j];
			n[i+j]=temp;
			}
		}
		//////////////////////END OF SORTING///////////////////////////////////////



		for(int i=0;i<Q;i++)
		{

			int position=0;	
			for(int j=0;j<N;j++)
			{	

				if(q[i]==n[j])
				{position=j+1;
				break;}
			}

			if (position==0)
				cout<<q[i]<<" not found"<<endl;
			else if (position!=0)
				cout<<q[i]<<" found at "<<position<<endl;



		}







}
return 0;
}

