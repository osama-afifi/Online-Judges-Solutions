#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	freopen("input.in","r",stdin);
int t;
cin>>t;
while(t>0)
{
	
	int N;
	cin>>N;
	int num;
	int min=10000;
	int max=0;
	for(int i=0;i<N;i++)
	{
	cin>>num;
	if (num>max)
		max=num;

	if (num<min)
		min=num;
	
	}
	
	cout<<2*(max-min)<<endl;
	
	
	
	
	t--;
}

return 0;
}