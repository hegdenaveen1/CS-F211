#include <bits/stdc++.h>
using namespace std;


bool yash(string a,string b)
{
	int al=a.length();
	int bl=b.length();
	int aans=0,bans=0;
	for(int i=0;i<al;i++)
	{
		aans+=a[i];
	}

	for(int i=0;i<bl;i++)
	{
		bans+=b[i];
	}
	return __builtin_popcount(aans)<__builtin_popcount(bans);
}


int32_t main()
{



    int n;
    cin >> n;
    vector<string> v(n);

    for(int i=0;i<n;i++)
    {
    	cin >> v[i];
    }

    sort(v.begin(),v.end(),yash);

    for(int i=0;i<n;i++)
    {
    	cout << v[i] << endl;
    }

    return 0;
}