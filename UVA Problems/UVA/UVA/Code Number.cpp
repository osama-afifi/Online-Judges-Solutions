# include <iostream>
# include <string>

using namespace std;

int main()

{
	freopen("input.in","r",stdin);

	string map1 = "H3LL0 MY L0V3, 1 M H499Y 83C4U53 500N 1 W1LL 83 70 Y0UR 51D3.7H15 71M3 W17H0U7 Y0U H45 833N 373RN4L. 1 1NV173 Y0U 70 7H3 200 0N3 70 533 7H3 238R42 4ND 60R1L42.";
	string map2 = "HELLO MY LOVE, I M HAPPY BECAUSE SOON I WILL BE TO YOUR SIDE.THIS TIME WITHOUT YOU HAS BEEN ETERNAL. I INVITE YOU TO THE ZOO ONE TO SEE THE ZEBRAS AND GORILAS.";

	int t;
	cin>>t;
	cin.get();
	while(t>0)
	{
		string text;
		while(getline(cin,text))
		{
			if(text=="")break;

			int i;

			for( i=0; i<text.length() ;i++)
			{
				for(int j=0; j<map1.length();j++)

				{
					if(text[i]==map1[j])
					{text[i]=map2[j];
					break;}
				}

			}

			cout<<text<<endl;


		}
		if(t!=1)
		cout<<endl;
		t--;
	}
	return 0;
}