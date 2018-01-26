
#include <bits/stdc++.h>
using namespace std;



int32_t main()
{
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

string s;
cin >> s;
int l=s.length();
int checkdigit = (int)(s[l-1]-'0');
vector<int> v(l-1);
for(int i=0;i<l-1;i++)
{
	v[i]=(int)(s[i]-'0');
}
reverse(v.begin(),v.end());
for(int i=0;i<l-1;i=i+2)
{
	v[i]=v[i]*2;
}

int sum = checkdigit;
int rem;
for(int i=0;i<l-1;i++)
{
	if(v[i]<10)
		sum+=v[i];
	else
	{
		while(v[i]>0)
		{
		rem=v[i]%10;
		sum+=rem;
		v[i]=v[i]/10;
		}
	}
}
if(sum%10==0)
{
	cout << "credit card number is valid\n";
}
else
{
	cout << "credit card number is not valid\n";
}
	return 0;
}
