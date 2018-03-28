#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
		FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

string s;
int hashstarflag=0;
while(getline(cin,s))
{	
	int commentflag=1;
	int anythingtypedinthisline=0;
	s=s + " ";
	int l=s.length();
	for(int i=1;i<l;i++)
	{
		
		if(s[i-1]=='/'&&s[i]=='/')
		{
			commentflag=0;
		}
		if(s[i-1]=='/'&&s[i]=='*')
			hashstarflag=1;
		if(s[i-1]=='*'&&s[i]=='/')
			{
				hashstarflag=0;
				i++;
				i++;
			}

			

		if(commentflag and !hashstarflag)
		{
			if(s[i-1]!=' ' or anythingtypedinthisline)
			{
				cout << s[i-1];
			}
			if(s[i-1]!=' ')
			{
				anythingtypedinthisline=1;
			}
		}
	}

	if(!hashstarflag and anythingtypedinthisline)
	{
		cout << endl;
	}

}

	return 0;
}