#include <iostream>
#include <string>

using namespace std;
int main ()
{
	freopen("input.in", "r", stdin);

	int round;



	while(cin>>round )
	{
		cin.get();
		if(round<0) break;

		string solution;
		string answer;

		getline(cin,solution);
		getline(cin,answer);

		int count=0;

		size_t pos;


		bool corr[500]={};


	
		for(int i=0;i<answer.length();i++)
		{
			pos = solution.find(answer[i]);

			if(string::npos==pos)
			{
				count++;
				if(count>=7)break;
			}

			else 
				 corr[answer[i]]=true;
		}

		bool correct=true;

		for(int i=0;i<solution.length();i++)
		{
		if  (corr[solution[i]]!=true)
				correct=false;
		}


	
		cout<<"Round "<<round<<endl;

		if(correct==true)
			cout<<"You win."<<endl;

		else if (count>=7)
			cout<<"You lose."<<endl;

		else
			cout<<"You chickened out."<<endl;





	}


	return 0;
}
