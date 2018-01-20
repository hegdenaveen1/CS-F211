#include <bits/stdc++.h>
using namespace std;

long long solve(int n)
{
	long long ans=2;
	while(n>1)
	{
		ans=ans*2%10000000000;
		n--;
	}
	return ans;
}

int main()
{

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
    #endif	

      int n;
      cin >> n;
      cout << solve(n);
    

	return 0;
}






