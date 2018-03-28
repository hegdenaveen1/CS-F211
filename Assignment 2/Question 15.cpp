#include <bits/stdc++.h>
using namespace std;


int seedconvert(string a,int n)
{
	int la=a.length();
	if((n%2==0&&la%2!=0)||(n%2!=0&&la%2==0))
	{
		a = "0" + a;
		la++;
	}
	int abc=0;
	int count=pow(10,n-1);
	for(int i=(la-n)/2;i<(la+n)/2;i++)
	{
		abc=abc+count*(a[i]-'0');
		count=count/10;
		
	}
	return abc;
}

string tostring(int a)
{
	string ans="";
	while(a)
	{
		ans.push_back(a%10+'0');
		a=a/10;	
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int tonum(string a)
{
	int ans=0;
	int count=1;
	int la=a.length();
	for(int i=la-1;i>=0;i--)
	{
		ans=ans+count*(a[i]-'0');
		count=count*10;
	}
	return ans;
}


int32_t main()
{

	    FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

string a;
int n;
cin >> a >> n;
int see;
int l=a.length();
int y=tonum(a);

while(n--)
{
	string b=tostring(y*y);
	y=seedconvert(b,l);
	cout << y << endl;	
}

return 0;
}