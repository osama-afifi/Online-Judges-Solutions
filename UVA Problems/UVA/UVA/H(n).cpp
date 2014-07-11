
#include<math.h>
#include <stdio.h>

using namespace std;
long long N,res;
int t,root,prev,current;
int main ()
{ 
	freopen("input.in","r",stdin); 

	scanf("%d",&t);

	while(t>0)
	{

		scanf("%lld",&N);
		res = 0;
		root=(sqrt(double(N)));		
		prev=N;
		for( int i = 1; i <= root ; i++ )	
		{
			current=N/i;
			res += current + (prev-current)*(i-1) ;
			prev=current;
		}
		if(prev>root)
			res+= prev-1;
		if(res>0)
			printf("%lld\n",res);
		else
			printf("0\n");

		t--;
	}

	return 0;
}