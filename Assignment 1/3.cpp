#include <bits/stdc++.h>
using namespace std;

struct charcounter
{
	char key;
	int count;
};

int main()
{

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
    #endif	

    string s;
    getline(cin,s);
    vector<charcounter> abc;
    char ke;    
    for(int i=0;i<s.length();i++)
    {
    	ke=s[i];
    	int notfound=1;
    	for(int j=0;j<abc.size()&&notfound;j++)
    	{
    		if(ke==abc[j].key)
    		{
    			abc[j].count++;
    			notfound=0;
    		}
    	}
    	if(notfound)
    	{
    		charcounter a;
    		a.key=ke;
    		a.count=1;
    		abc.push_back(a);
    	}
    }
    for(int i=0;i<abc.size();i++)
    {
    	cout << abc[i].key << " " << abc[i].count << "\n";
    }

	return 0;
}