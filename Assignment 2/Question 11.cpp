
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

int n;
cin >> n;
int swap1,swap2;
int swap1found=1;
int x,y=numeric_limits<int>::min();
int arr[n];
int swap1pos,swap2pos;

for(int i=0;i<n;i++)
{
	cin >> x;
	arr[i]=x;
	if(x<y&&swap1found)
	{
		swap1=y;
		swap1found=0;
		swap1pos=i-1;
	}
	if(x<y&&!swap1found)
	{
		swap2=x;
		swap2pos=i;
	}
	y=x;
}

cout << swap1 << " " << swap2 << endl;
cout << swap1pos << " " << swap2pos;


return 0;
}

