#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(char ch)
{
	if(ch=='a')
	{
		cout << "2";
	}
	else if(ch=='b')
	{
		cout << "22";
	}
	else if(ch=='c')
	{
		cout << "222";
	}
	else if(ch=='d')
	{
		cout << "3";
	}
	else if(ch=='e')
	{
		cout << "33";
	}
	else if(ch=='f')
	{
		cout << "333";
	}
	else if(ch=='g')
	{
		cout << "4";
	}
	else if(ch=='h')
	{
		cout << "44";
	}
	else if(ch=='i')
	{
		cout << "444";
	}
	else if(ch=='j')
	{
		cout << "5";
	}
	else if(ch=='k')
	{
		cout << "55";
	}
	else if(ch=='l')
	{
		cout << "555";
	}
	else if(ch=='m')
	{
		cout << "6";
	}
	else if(ch=='n')
	{
		cout << "66";
	}
	else if(ch=='o')
	{
		cout << "666";
	}
	else if(ch=='p')
	{
		cout << "7";
	}
	else if(ch=='q')
	{
		cout << "77";
	}
	else if(ch=='r')
	{
		cout << "777";
	}
	else if(ch=='s')
	{
		cout << "7777";
	}
	else if(ch=='t')
	{
		cout << "8";
	}
	else if(ch=='u')
	{
		cout << "88";
	}
	else if(ch=='v')
	{
		cout << "888";
	}
	else if(ch=='w')
	{
		cout << "9";
	}
	else if(ch=='x')
	{
		cout << "99";
	}
	else if(ch=='y')
	{
		cout << "999";
	}
	else if(ch=='z')
	{
		cout << "9999";
	}
	else if(ch=='1')
	{
		cout << "11";
	}
	else if(ch=='2')
	{
		cout << "2222";
	}
	else if(ch=='3')
	{
		cout << "3333";
	}
	else if(ch=='4')
	{
		cout << "4444";
	}
	else if(ch=='5')
	{
		cout << "5555";
	}
	else if(ch=='6')
	{
		cout << "6666";
	}
	else if(ch=='7')
	{
		cout << "77777";
	}

	else if(ch=='8')
	{
		cout << "8888";
	}
	else if(ch=='9')
	{
		cout << "99999";
	}
	else if(ch=='0')
	{
		cout << "00";
	}
	else if(ch==' ')
	{
		cout << "0";
	}
}

int32_t main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	
 	string input;
 	getline(cin,input);
 	int l=input.length();
 	char ch;
 	for(int i=0;i<l;i++)
 	{
 		ch=input[i];
 		if(ch==input[i-1])
 		{
 			cout << " ";
 		}
 		solve(ch);
 	}


	return 0;
}
