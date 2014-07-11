# include <iostream>

using namespace std;

long long F91(long long n)
{
	if (n <= 100)
		return F91(F91(n+11));

if (n >= 101)
	return  n-10;


}


int main()
{
	freopen("input.in","r",stdin);

	long long N;

	while(cin>>N  &&N!=0)
	cout<<"f91("<<N<<") = "<<F91(N)<<endl;
	
	return 0;
}