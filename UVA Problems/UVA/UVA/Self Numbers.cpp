#include <cstring>
#include <stdio.h>

bool self[1000001];

int sum_dig(int n)
{
	int sum=0;
	while(n>0)
	{
	sum+=n%10;
	n/=10;
	}
	return sum;

}

int main()
{
	memset(self,false,sizeof(self));


for(int i=1 ; i<=1000000 ; i++)
	self[i+sum_dig(i)]=true;

for(int i=1 ; i<=1000000; i++)
	if(!self[i])	
	printf("%d\n",i);

	
	return 0;
}