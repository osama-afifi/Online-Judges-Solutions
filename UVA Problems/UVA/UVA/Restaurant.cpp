# include <iostream>
using namespace std;
int main()
{
char x;
float y,sum;
label:
cout<<   "Type\n"
	     "A for hotdog sandwich (9$)\n"
         "B for beef sandwich (12$)\n"
         "C for chicken sandwich (11$)\n"
         "D for Pepsi (2$)\n"
         "E for Potatoes (1$)\n"
         "F for salad (1.5$)\n"
         "N to end choosing\n"
		 "\n""\n"
		 "Enter your order: \n";
cin>>x;

 
if ((x=='a') || (x=='A'))
{
	y=9;
}

else if ((x=='b') || (x=='B'))
{
	y=12;
}

else if ((x=='c') || (x=='C'))
{
	y=11;
}

else if ((x=='d') || (x=='D'))
{
	y=2;
}

else if ((x=='e') || (x=='E'))
{
	y=1;
}

else if ((x=='f') || (x=='F'))
{
	y=1.5;
}

else if ((x=='n') || (x=='N'))
{
	cout<<"Thank You\r";
	y=0;
}
else
{
	cout<<"ENTER A VALID CHOICE\a"<<endl<<endl<<endl;
	goto label;
} 
sum=float(y+((float)10/100)*y);
cout<<"You will Pay "<<sum<<" $""\n";



cin.get();
return 0;
/*
	By Osama Magdy
	Section:2
	*/
}