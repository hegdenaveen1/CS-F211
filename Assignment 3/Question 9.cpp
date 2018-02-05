#include <bits/stdc++.h>
using namespace std;


bool NumericSort(string a,string b)
{
  while(a[0]=='0')
  {
    a.erase(a.begin());
  }
  while(b[0]=='0')
  {
    b.erase(b.begin());
  }  
    int n=a.length();
    int m=b.length();
  if(n==m)
    return a<b;
  return n<m;
}

int32_t main()
{

        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

int n;
cin >> n;
vector<string> s(n);

for(int i=0;i<n;i++)
{
	cin >> s[i];
}
sort(s.begin(),s.end(),NumericSort);
for(int i=0;i<n;i++)
{
	cout << s[i] << endl;
}


return 0;
}
