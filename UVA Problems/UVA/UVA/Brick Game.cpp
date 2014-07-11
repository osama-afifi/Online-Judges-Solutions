#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);
long int t,kase=1; 
cin>>t;
while(t>0)
{
int n,x[20],res;
cin>>n;

for(int i=0;i<n;i++)
{cin>>x[i];}
///////////ARRANGING ARRAY (SORTING) --->HERE ASCENDING FOR EXAMPLE//////////////
for(int i=0;i<n;i++)
	for(int j=1;j<(n-i);j++)
{
	if (x[i]>x[i+j]) /////Swapping
	{int temp=x[i];
	x[i]=x[i+j];
	x[i+j]=temp;
	}
//////////////////////END OF SORTING///////////////////////////////////////

}
	int i=(n/2);
	res=x[i];
	cout<<"Case "<<kase++<<": "<<res<<endl;

t--;}



	return 0;
}
