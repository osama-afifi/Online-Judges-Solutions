#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

long square(long x)
{
	return x*x;
}
int BigMod(int B,int P, int M)
{
	if(P==0)
		return 1;
	else if(P%2==0)
		return square((BigMod(B,P/2,M)))%M;
	else
	return (B%M)*(BigMod(B,P-1,M))%M;


}
int main()
{
	freopen("input.in","r",stdin);

	int  B,M,P;
	int t;
	while(scanf("%d", &t)!=EOF)
	{
		if(!t)break;
		while(t--)
		{
		scanf("%d%d%d", &B, &P, &M);
		printf("%d\n",BigMod(B,P,M));
		}
	}

return 0;
}
