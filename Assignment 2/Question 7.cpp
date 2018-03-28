#include <bits/stdc++.h>
using namespace std;


int32_t main()
{
		FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

string s;

getline(cin,s);

int l=s.length();

int depth;
cin >> depth;

int x=l/depth+1;

char arr[depth][20];
char ch = ' ';



int j=0,k=0;

for(int i=0;i<l;i++)
{
	ch=s[i];
	if(ch!=' ')
	{
		arr[j][k]=ch;
		j++;
		
	}
	if(j>=depth)
		{
			j=0;
			k++;
		}
}


for(int i=0;i<depth;i++)
{
	cout << arr[i] << " ";
	cout << endl;
}

	return 0;
}