# include <stdio.h>

int no[14];
int N;

int main()
{
	freopen("input.in","r",stdin);
	bool first=true;
	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)break;

	if(!first)
		printf("\n");
	first=false;

		for(int i=0;i<N;i++)
			scanf("%d",&no[i]);

		      for ( int a = 0; N - a > 5; a++ ) {
	            for ( int b = a + 1; N - b > 4; b++ ) {
	                for ( int c = b + 1; N - c > 3; c++ ) {
	                    for ( int d = c + 1; N - d > 2; d++ ) {
	                        for ( int e = d + 1; N - e > 1; e++ ) {
	                            for ( int f = e + 1; N - f > 0; f++ ) {
									printf("%d %d %d %d %d %d\n",no[a],no[b],no[c],no[d],no[e],no[f]);
								}
							}
						}
					}
				}
			  }
	

	}
	return 0;
}