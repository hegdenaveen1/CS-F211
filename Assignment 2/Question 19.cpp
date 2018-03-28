#include <bits/stdc++.h>
using namespace std;


void solve(string a)
{
	if(a=="2")
		cout << "a";
	else if(a=="22")
		cout << "b";
	else if(a=="222")
		cout << "c";
	else if(a=="3")
		cout << "d";
	else if(a=="33")
		cout << "e";
	else if(a=="333")
		cout << "f";
	else if(a=="4")
		cout << "g";
	else if(a=="44")
		cout << "h";
	else if(a=="444")
		cout << "i";
	else if(a=="5")
		cout << "j";
	else if(a=="55")
		cout << "k";
	else if(a=="555")
		cout << "l";
	else if(a=="6")
		cout << "m";
	else if(a=="66")
		cout << "n";
	else if(a=="666")
		cout << "o";
	else if(a=="7")
		cout << "p";
	else if(a=="77")
		cout << "q";
	else if(a=="777")
		cout << "r";
	else if(a=="7777")
		cout << "s";
	else if(a=="8")
		cout << "t";
	else if(a=="88")
		cout << "u";
	else if(a=="888")
		cout << "v";
	else if(a=="9")
		cout << "w";
	else if(a=="99")
		cout << "x";
	else if(a=="999")
		cout << "y";
	else if(a=="9999")
		cout << "z";
	else if(a=="0")
		cout << " ";
	else if(a=="00")
		cout << "0";
	else if(a=="11")
		cout << "1";
	else if(a=="2222")
		cout << "2";
	else if(a=="3333")
		cout << "3";
	else if(a=="4444")
		cout << "4";
	else if(a=="5555")
		cout << "5";
	else if(a=="6666")
		cout << "6";
	else if(a=="77777")
		cout << "7";
	else if(a=="8888")
		cout << "8";
	else if(a=="99999")
		cout << "9";

}


int32_t main()
{

	    FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

string s;
getline(cin,s);

string a="";

for(int i=0;i<s.length();i++)
{
	if(s[i+1]!=s[i])
	{
		a.push_back(s[i]);
		solve(a);
		a="";
	}
	else
	{
		a.push_back(s[i]);
	}
}

return 0;
}