#include <stdio.h>

//	{5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3};

int day,month,X;

int main()
{
	freopen("input.in","r",stdin);
	char week[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int t;

	scanf("%d",&t);

	while(t--)
	{
		scanf("%d%d",&month,&day);

		day--;
		switch(month)
		{
		case 4:
			printf("%s\n",week[(day+4)%7]);
			//	cout<<week[(day+4)%7]<<endl;
			break;
		case 6:
			printf("%s\n",week[(day+2)%7]);
			//cout<<week[(day+2)%7]<<endl;
			break;
		case 8:
			printf("%s\n",week[day%7]);
			//cout<<week[day%7]<<endl;
			break;
		case 10:
			printf("%s\n",week[(day+5)%7]);
			//	cout<<week[(day+5)%7]<<endl;
			break;
		case 12:
			printf("%s\n",week[(day+3)%7]);
			//	cout<<week[(day+3)%7]<<endl;
			break;
		case 1:
			printf("%s\n",week[(day+5)%7]);
			//	cout<<week[(day+5)%7]<<endl;
			break;
		case 2:
			printf("%s\n",week[(day+1)%7]);
			//	cout<<week[(day+1)%7]<<endl;
			break;
		case 3: 
			printf("%s\n",week[(day+1)%7]);
			//cout<<week[(day+1)%7]<<endl;
			break;
		case 5:
			printf("%s\n",week[(day+6)%7]);
			//cout<<week[(day+6)%7]<<endl;
			break;
		case 7:
			printf("%s\n",week[(day+4)%7]);
			//cout<<week[(day+4)%7]<<endl;
			break;
		case 9:
			printf("%s\n",week[(day+3)%7]);
			//cout<<week[(day+3)%7]<<endl;
			break;
		case 11:
			printf("%s\n",week[(day+1)%7]);
			//	cout<<week[(day+1)%7]<<endl;
			break;
		}


	}


	return 0;
}