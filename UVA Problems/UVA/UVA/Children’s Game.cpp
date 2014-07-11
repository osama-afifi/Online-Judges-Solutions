#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 
bool cmp(string x , string y)
{
	if(x+y>y+x)return true;
		return false;
}
int main()
{
	freopen("input.in","r",stdin);

	int n;
	string parts[51];
	while(cin>>n && n!=0 )
	{
	
	for(int i=0;i<n;i++)
	cin>>parts[i];
		
	sort(parts,parts+n,cmp);

	string output;
	for(int i=0;i<n;i++)
	cout<< parts[i];

	cout<<endl;
	}
return 0;
}