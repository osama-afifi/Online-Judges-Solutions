#include <cstring>
#include <stdio.h>

bool Aseq;
int arr[35];
int N,kase=1;
int dp[1001];



int main()
{
	freopen("input.in","r",stdin);


	while(scanf ("%d", &N ) != EOF)
	{
		memset(dp,0,sizeof(dp));
		printf("Case #%d:",kase++);
		Aseq=true;

		for(int i=0;i<N;i++){
			scanf( "%d", &arr[i] );
			printf(" %d",arr[i]);
		}
		printf("\n");





		//if(arr[0]!=1 || arr[0]>arr[1])
		//	Aseq=false;

		for(int i=1;i<N;i++)
			if( arr[i-1] >= arr[i] )
			{
				Aseq=false;
				break;
			}


		if(Aseq)
		{
			dp[0]=1;

			for(int i=0; i<N ; i++)
				for(int j=1000; j>=0 ;j--)
					if(dp[j] && j+arr[i]<=1000)
						dp[j+arr[i]]++;

		for(int i=0;i<N;i++)
			if(dp[arr[i]]>1)
			{
				Aseq=false;
				break;
			}


		}





			(Aseq) ? printf("This is an A-sequence.\n") : printf("This is not an A-sequence.\n");



	}


	return 0;
}