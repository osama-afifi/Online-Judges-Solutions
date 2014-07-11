#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	freopen("input.in","r",stdin);
	long long N;

	while(cin>>N && N!=0)
	{
		int x,y;
		int s=floor(sqrt((double)N));
		int left=N-(s*s);
		if(left<=s)
		{
			
			if(s*s==N)
			{
				x=left+1;
				y=s;
			}
			else
			{
				x=left;
				y=s+1;

			}
		}
		else
		{
			if(s*s==N)
			{
				x=s;
				y=s+1-(left-(s+1));
			}
			else
			{
				x=s+1;
				y=s+1-(left-(s+1));
			}
		}

		if(s%2==0)
			swap(x,y);
		/*if()*/
		cout<<x<<" "<<y<<endl;

	}



	return 0;
}