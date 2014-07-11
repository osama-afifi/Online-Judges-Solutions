# include <iostream>
# include <string>
# include <cstring>
# include <sstream>
# include <iomanip>
# include <cstdlib>
# include <algorithm>
# include <vector>

using namespace std;



int main()
{ 

	freopen("input.in","r",stdin);

	vector<unsigned long long> MEDIAN;

	unsigned long long NO;

	while(cin>>NO)
	{

		MEDIAN.push_back(NO);
		sort(MEDIAN.begin(),MEDIAN.end());

		if(MEDIAN.size()%2==1)
			cout<<MEDIAN[((MEDIAN.size()+1)/2)-1]<<endl;
		

		else
			cout<<(MEDIAN[((MEDIAN.size())/2)-1]+MEDIAN[((MEDIAN.size())/2)])/2<<endl;
		
	}
	return 0;
}
