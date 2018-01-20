#include <bits/stdc++.h>
using namespace std;


int main()
{

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
    #endif	


    string key;
    cin >> key;
	string s;
	int count=0;
	while(cin >> s)
	{
		if(s==key)
			count++;
	}
	cout << count;
	
	return 0;
}
