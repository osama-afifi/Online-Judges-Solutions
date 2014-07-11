# include <iostream>
# include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////

int main()
{	freopen("input.in", "r", stdin);

long long int A,L,count,n,kase=1;
while(cin>>A>>L && A>0 && L>0)
{


	   n=A;
		///////////////////////////////
		for (count=1;(n>0)&&(n<=L);count++)
		{
			if(n==1)break;
				
			if (n>L)break;

			if (n%2==1)
				n=(3*n)+1;

			else if (n%2==0)
				n=(n/2);

			else if(n==1)
				break;

			if (n>L)break;
		}
		////////////////////////////////

		
	
	
	cout<<"Case "<<kase++<<": A = "<<A<<", limit = "<<L<<", number of terms = "<<count<<endl;

	
	

}

cin.get();
return 0;
}
