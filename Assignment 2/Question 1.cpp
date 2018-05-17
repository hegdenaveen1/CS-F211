#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

int count=0;

for(int i=1;i<=pow(3,8)-1;i++)
{
	int complete[9]={1,2,3,4,5,6,7,8,9};
	string s="";
	int x=i;
	while(x)
	{
		int y=x%3;
		s.push_back(y+'0');
		x=x/3;
	}
	while(s.length()<7)
	{
		s.push_back('0');
	}

	reverse(s.begin(),s.end());

	for(int j=0;j<8;j++)
	{
		if(s[j]=='0')
		{
			complete[j]=10*complete[j]+complete[j+1];
			complete[j+1]=0;
		}
	}
	int sum=complete[0];
	for(int j=0;j<8;j++)
	{
		if(s[j]=='1')
		{
			sum = sum + complete[j+1];
		}
		else if(s[j]=='2')
		{
			sum = sum - complete[j+1];
		}
	}
	if(sum==100)
	{
		count++;
	}
}

cout << count;

return 0;
}