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


int main()
{ 

	freopen("input.in","r",stdin);


vector< pair < long long ,long long > > COUNTER;
vector< pair < long long ,long long > > ::iterator it;	
	
	bool found=false;

	long long NO;
	while(cin>>NO)
	{
		found=false;
		for(it=COUNTER.begin();it!=COUNTER.end();++it)
		{
			if((*it).first==NO)
			{
				found=true;
				break;
			}
		}

		if(found==false)
		{
			pair < long long ,long long > temp (NO,1);
			COUNTER.push_back(temp);
		}

		else
		{
			(*it).second+=1;
			
		}
	}




	for(it=COUNTER.begin();it!=COUNTER.end();it++)
	{
		if((*it).second!=0)
			cout<<(*it).first<<" "<<(*it).second<<endl;
	}

	return 0;
}
