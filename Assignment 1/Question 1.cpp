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

	string s;
	cin >> s;
	int l=s.length();
	int n=sqrt(l);
	char arr[n][n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=s[count];
			count++;
		}
	}

	count=0;
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(arr[i][j]!=s[count])
			{
				cout << "NO";
				return 0;
			}
			count++;
		}
	}
	cout << "YES";
	return 0;
}






