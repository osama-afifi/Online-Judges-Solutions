#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

int n,x[5000];
while(cin>>n)
{
for(int i=0;i<n;i++)
{cin>>x[i];}

int count=0;
///////////ARRANGING ARRAY (SORTING) --->HERE ASCENDING FOR EXAMPLE//////////////
for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
{
	if (x[i]>x[j]) /////Swapping
	{
	/*swap(x[i],x[j]);*/
	count++;
	}
}
//////////////////////END OF SORTING///////////////////////////////////////

	cout<<"Minimum exchange operations : "<<count<<endl;
	
}



	return 0;
}
