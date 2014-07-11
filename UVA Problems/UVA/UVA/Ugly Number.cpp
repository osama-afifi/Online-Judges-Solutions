

# include <iostream>
using namespace std;
# define MAX 999999999999

int main()
{
	//freopen("input.in","r",stdin);
//cout<<"The 1500'th ugly number is "<<859963392<<"."<<endl;
		
	long long ugly[2000];
	ugly[0]=1;
	ugly[1]=2;
	ugly[2]=3;
	ugly[3]=4;
	for(int i=1; i<1500;i++)
	{
	ugly[i]=MAX;
	for(int j=0;j<i;j++)
	{
	
	
		if( (ugly[j]*2>ugly[i-1]) && (ugly[j]*2<ugly[i]) )
			ugly[i]=ugly[j]*2;

	
		else if( (ugly[j]*3>ugly[i-1]) && (ugly[j]*3<ugly[i]) )
			ugly[i]=ugly[j]*3;

	
		else if( (ugly[j]*5>ugly[i-1]) && (ugly[j]*5<ugly[i]) )
			ugly[i]=ugly[j]*5;

	
		else if ( (ugly[j]*2>ugly[i]) && (ugly[j]*3>ugly[i]) && (ugly[j]*5>ugly[i]) ) break;
	}
	
	}

	
			cout<<"The 1500'th ugly number is "<<ugly[1499]<<"."<<endl;
	
	

	
	return 0;
}