#include <bits/stdc++.h>
using namespace std;

int main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	
 	string a="goodbye",b;
 	cin >> b; 
 	int la=a.length();
 	int lb=b.length();
 	int count=0;
 	for(int i=0;i<lb;i++)
 	{
 		if(a[count]==b[i])
 			count++;
 	}
 	if(count==la)
 	{
 		cout << "Yes";
 	}
 	else
 	{
 		cout << "No";
 	}

	return 0;
}




