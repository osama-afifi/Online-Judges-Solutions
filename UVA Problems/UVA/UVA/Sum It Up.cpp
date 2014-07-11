#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

int target;
int n;
int arr[13];
int vis[13];
bool found=false;

string text;
set <string> S;



void solve(int index, int sum , int start , string output)
{

	if(sum==target)
	{
		found=true;
		if(S.find(output)==S.end())
			cout<<output<<endl;
		S.insert(output);
	}

	for(int i = start ; i<n ; i++ )
	{
		if(!vis[i] && sum+arr[i]<=target)
		{
			vis[i]=true;
			stringstream ss;
			ss<<arr[i];
			ss>>text;
			if(index!=0)
				text="+"+text;
			solve(index+1,sum+arr[i],i,output+text);
			vis[i]=false;
		}
	}


}

int main()
{
	freopen("input.in","r",stdin);
	while(cin>>target>>n)
	{	
		if(target==0 && n==0)break;
		found=false;
		S.clear();
		for(int i = 0 ; i<n ; i++)
		{
			scanf("%d",&arr[i]);
			vis[i]=false;
		}
		sort(arr,arr+n);
		reverse(arr,arr+n);
		printf("Sums of %d:\n",target);
		solve(0,0,0,"");
		if(!found)
			cout<<"NONE"<<endl;

	}

	return 0;
}
