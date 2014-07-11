#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
string text;
bool palin(int a,int b)
{
	for(int i=a;i<b;i++){
		if(text[i]!=text[b-1-i+a])
			return false;
	}
	return true;
}
bool alin()
{
	for(int i=1;i<text.length();i++)
	{
	if(palin(0,i) && palin(i,text.length()))
		return true;
	}
	return false;
}
int main()
{
	freopen("input.in","r",stdin);

	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
	cin>>text;

	if(alin())
		printf("alindrome\n");
	else if(palin(0,text.length()))
		printf("palindrome\n");
	else
			printf("simple\n");

		

	t--;
	}

return 0;

}