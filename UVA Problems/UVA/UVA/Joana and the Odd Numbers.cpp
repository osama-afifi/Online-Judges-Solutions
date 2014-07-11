#include <iostream>

using namespace std;
int main()
{
	freopen("input.in","r",stdin);
long long int N;

while(cin>>N)
{
	N=(N+1)/2;
	cout<<3 * (2*(N * N)-1) - 6<<endl;
}
return 0;
}
