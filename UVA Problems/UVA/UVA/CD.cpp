# include <iostream>
# include <string>
# include <cstring>
# include <sstream>
# include <iomanip>
# include <cstdlib>
# include <algorithm>
# include <vector>
# include <map>
# include <set>

using namespace std;

//SET ACC

int main()
{ 

	freopen("input.in","r",stdin);


	long long m;
	long long n;

	while(cin>>n>>m && m!=0 && n!=0)
	{
		if(m==0 && n==0)break;
		long long count=0;
		set<long long> CD;
		int NO;
		for(int i=0;i<n;i++)
		{
			cin>>NO;
			CD.insert(NO);
		}

		for(int i=0;i<m;i++)
		{
			cin>>NO;

			if(CD.find(NO)!=CD.end())
				count++;
		}





		cout<<count<<endl;
	}


	return 0;
}
