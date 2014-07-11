

# include <stdio.h>

# define MAX 999999999999

int main()
{
	freopen("input.in","r",stdin);

	long long humble[5843];
	humble[0]=1;
	humble[1]=2;
	humble[2]=3;
	humble[3]=4;

	for(int i=1; i<5843;i++)
	{
		humble[i]=MAX;
		for(int j=0;j<i;j++)
		{
			if( (humble[j]*2>humble[i-1]) && (humble[j]*2<humble[i]) )
				humble[i]=humble[j]*2;

			else if( (humble[j]*3>humble[i-1]) && (humble[j]*3<humble[i]) )
				humble[i]=humble[j]*3;

			else if( (humble[j]*5>humble[i-1]) && (humble[j]*5<humble[i]) )
				humble[i]=humble[j]*5;

			else if( (humble[j]*7>humble[i-1]) && (humble[j]*7<humble[i]) )
				humble[i]=humble[j]*7;

			else if ( (humble[j]*2>humble[i]) && (humble[j]*3>humble[i]) && (humble[j]*5>humble[i]) && (humble[j]*7>humble[i]) ) break;
		}

	}
	int n;
	while(scanf("%d",&n))
	{
		if(!n)break;
		if(n%100==11 || n%100==12 || n%100==13)
			printf("The %dth humble number is %lld.\n",n,humble[n-1]);
		else 
		{
			switch(n%10)
			{
			case 1:
				printf("The %dst humble number is %lld.\n",n,humble[n-1]);
				break;
			case 2:
				printf("The %dnd humble number is %lld.\n",n,humble[n-1]);
				break;
			case 3:
				printf("The %drd humble number is %lld.\n",n,humble[n-1]);
				break;
			default:
				printf("The %dth humble number is %lld.\n",n,humble[n-1]);
				break;
			}
		}

	}


	return 0;
}