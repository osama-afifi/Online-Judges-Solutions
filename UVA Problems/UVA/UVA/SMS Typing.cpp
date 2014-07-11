
#include <iostream>
#include <string>
#include <iomanip>
#include<stdio.h>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int t,kase=1;
	cin>>t;
	cin.get();

	while (t>0)
	{
		
		int sum=0;
	char s[1000];
	gets(s);
		int i=0;

		 while(s[i])
		 {

  
			if ( (s[i] =='a') || (s[i] =='d') || (s[i] =='g') || (s[i] =='j') || (s[i] =='m') || (s[i] =='p') || (s[i] =='t') || (s[i] =='w') || (s[i] ==' ') ) 
		   sum++;
		
			else if ( (s[i] =='b') || (s[i] =='e') || (s[i] =='h') || (s[i] =='k') || (s[i] =='n') || (s[i] =='q') || (s[i] =='u') || (s[i] =='x')  ) 
		sum=sum+2;

			else if ( (s[i] =='c') || (s[i] =='f') || (s[i] =='i') || (s[i] =='l') || (s[i] =='o') || (s[i] =='r') || (s[i] =='v') || (s[i] =='y')  ) 
		sum=sum+3;

			else if ( (s[i] =='s') || (s[i] =='z')  ) 
		sum=sum+4;
		
		i++;
		}

		cout<<"Case #"<<kase++<<": "<<sum<<endl;




t--;}


	return 0;
}
