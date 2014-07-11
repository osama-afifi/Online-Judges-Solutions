#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

unsigned char arr[105];
string text;
int pointer,len;

int main()
{
	freopen("input.in","r",stdin);
	int t,kase=1;
	scanf("%d",&t);
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		cin>>text;
		pointer=0;
		//>	Increment the pointer (to point to the next cell to the right).
		//<	Decrement the pointer (to point to the next cell to the left).
		//+	Increment (increase by one) the byte at the pointer.
		//–	Decrement (decrease by one) the byte at the pointer.
		//.	Output the value of the byte at the pointer.
		len = text.length();
		for(int i=0 ; i<len ; i++)
		{
			switch (text[i])
			{
			case '>':
				pointer = (++pointer)%100;
				break;
			case '<':
				pointer = (--pointer+100)%100;
				break;
			case '+':		
				arr[pointer] = (++arr[pointer])%256;
				break;
			case '-':
				arr[pointer] = (--arr[pointer]+256)%256;
				break;
			}

		}
		printf("Case %d: ",kase++);
		printf("%02X",arr[0]);
		for(int i = 1 ; i<100 ; i++)
		{
printf(" %02X",arr[i]);
		}

		printf("\n");
	}
	return 0;
}