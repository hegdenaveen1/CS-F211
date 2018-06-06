#include <bits/stdc++.h>
using namespace std;

//////////////////
// Naveen Hegde //
//    BITS H    //
//////////////////

#define int long long
#define uint unsigned long long
#define real long double

#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ss second
#define ff first
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

//#define mod 1000000007

#define trace(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl


int32_t main()
{

        FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif


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
	while(s.length()<8)
	{
		s.push_back('0');
	}

	reverse(s.begin(),s.end());

	for(int j=0;j<9;j++)
	{
		if(s[j]=='0')
		{
			complete[j+1]=10*complete[j]+complete[j+1];
			complete[j]=0;
		}
	}
	int sum=0;


	for(int j=0;j<8;j++)
	{
		if(s[j]=='1')
		{
			sum = sum + complete[j] + complete[j+1];
		}
		else if(s[j]=='2')
		{
			sum = sum - complete[j+1];
		}
	}


	for(int k=0;k<9;k++)
	{
		cout << complete[k] << " ";
	}
	
	cout << endl;
	cout << s << endl;
	cout << sum << endl << endl;
	

	if(sum==100)
	{
		count++;

		
	}
}

cout << count;

return 0;
}