#include <bits/stdc++.h>
using namespace std;


int32_t main()
{


        int n;
        cin >> n;
        int x;
        cin >> x;
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
        	cin >> arr[i];
        }

        sort(arr,arr+n);

        int l=0,r=n-1;
        while(l<r)
        {
        	if(arr[l]+arr[r]==x)
        	{
        		cout << "YES";
        		return 0;
        	}
        	else if(arr[l]+arr[r]<x)
        	{
        		l++;
        	}
        	else
        	{
        		r--;
        	}
        }
        cout << "NO";

return 0;
}