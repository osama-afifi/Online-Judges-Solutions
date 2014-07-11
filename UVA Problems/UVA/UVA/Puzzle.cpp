# include <iostream>
# include <string>
# include <sstream>

using namespace std;

int main()
{

	freopen("input.in","r",stdin);
	string puzzle[6];
	string seq;
	char sequence;
	int space_x;
	int space_y;
	int kase=1;

	bool bara = false;

int line=1;

	while(true)
	{

		bool fakes=false;

		if(line==0)
		cin.get();

		for(int i=0;i<5;i++)
		{
			getline(cin,puzzle[i]);
			//
			if(puzzle[i]=="Z")
			{
				bara = true;
				break;
			}
			//
		}

		if(bara==true)break;

		size_t pos;

		for(int i=0;i<5;i++)
		{
			pos=puzzle[i].find(' ');

			if(string::npos!=pos)
			{
				space_x=pos;
				space_y=i;

			}


		}



		while(cin>>sequence && sequence!='0')
		{

			if(sequence=='A' &&space_y!=0)
			{
				swap(puzzle[space_y][space_x],puzzle[space_y-1][space_x]);
				space_y=space_y-1;
			}


			else if (sequence=='A' &&space_y==0)
			{
				fakes=true;
				//break;
			}

			else if(sequence=='B' &&space_y!=4)
			{
				swap(puzzle[space_y][space_x],puzzle[space_y+1][space_x]);
				space_y=space_y+1;
			}


			else if (sequence=='B' &&space_y==4)
			{
				fakes=true;
				//break;
			}


			else if(sequence=='R' &&space_x!=4)
			{
				swap(puzzle[space_y][space_x],puzzle[space_y][space_x+1]);
				space_x=space_x+1;
			}

			
			else if (sequence=='R' &&space_x==4)
			{
				fakes=true;
				//break;
			}


			else if(sequence=='L' &&space_x!=0)
			{
				swap(puzzle[space_y][space_x],puzzle[space_y][space_x-1]);
				space_x=space_x-1;
			}


			else if (sequence=='L' &&space_x==0)
			{
				fakes=true;
				//break;
			}
			else
				{
				fakes=true;
				//break;
			}

		}


		int first=1;

		

		if(line==0)
			cout<<endl;

		line=0;

		cout<<"Puzzle #"<<kase++<<":"<<endl;

		if(fakes==false)
		{


			for(int i=0;i<5;i++)
			{
				first=1;
				for(int j=0;j<5;j++)
				{
					if(first==0)cout<<" ";	
					cout<<puzzle[i][j];
					first=0;
				}
				cout<<endl;
			}


		}

		else
			cout<<"This puzzle has no final configuration."<<endl;



	}

	return 0;
}