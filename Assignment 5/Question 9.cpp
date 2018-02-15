#include <bits/stdc++.h>
using namespace std;



struct freq
{
	int value;
	int count;
};

int32_t main()
{

int n;
cin >> n;
int arr[n];

for(int i=0;i<n;i++)
{
	cin >> arr[i];
}

sort(arr,arr+n);

freq ans[n];
int key=arr[0];
int count=1;
int j=1;
int k=0;
while(j<n)
{
	if(arr[j]!=key)
	{	
		ans[k].value=key;
		ans[k].count=count;
		k++;
		count=1;
		key=arr[j];
	}
	else
	{
		count++;
	}
	j++;
}

ans[k].value=key;
ans[k].count=count;

for(int i=0;i<=k;i++)
{
	if(ans[i].count%2!=0)
	{
		cout << "Vishal";
		return 0;
	}
}
cout << "Tanmay";
return 0;
}