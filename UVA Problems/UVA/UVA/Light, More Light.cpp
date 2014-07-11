#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

//	freopen("input.in","r",stdin);
	unsigned N,sq;
	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)break;
	sq=sqrt((double)N);
	if(sq*sq==N)
		printf("yes\n");
	else
	printf("no\n");
	}
return 0;
}