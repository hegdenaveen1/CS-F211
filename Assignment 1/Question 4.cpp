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

    string abc;
    cin >> abc;
    string s;
   	if(abc=="encrypt")
   	{
   		while(cin >> s)
   		{
   			char ch;
   			reverse(s.begin(),s.end());
   			for(int i=0;i<s.length();i++)
   			{
   				ch=s[i]+3;
   				if(ch>'z')
   				{
   					ch=ch-26;
   				}
   				s[i]=ch;
   			}
   			cout << s << " ";
   		}
   	} 
   	else
   	{
   		while(cin >> s)
   		{
   			char ch;
   			for(int i=0;i<s.length();i++)
   			{
   				ch=s[i]-3;
   				if(ch<'a')
   				{
   					ch=ch+26;
   				}
   				s[i]=ch;
   			}
   			reverse(s.begin(),s.end());
   			cout << s << " ";
   		}
   	}

	return 0;
}






