//Beatifull Strings

#include<iostream>
#include<string>
#include<map>
#include<algorithm>


using namespace std;

int main()
{
	freopen("beautiful_stringstxt.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	string text;
	cin>>n;
	cin.ignore();
	int arr[30];
	for(int i = 0 ; i<n ; i++)
	{
		getline(cin,text);
		memset(arr,0,sizeof arr);
		for(int j = 0 ; j<text.length() ;j++)
			if(isalpha(text[j]))
				arr[tolower(text[j])-'a']++;
		sort(arr,arr+26);
		int sum=0;

		for(int j = 25; j>=0 ; j-- )
			sum+=arr[j]*(j+1);
		cout<<"Case #"<<i+1<<": "<<sum<<endl;
	}

return 0;
}