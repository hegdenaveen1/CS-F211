#include <bits/stdc++.h>
using namespace std;

#define int long long

struct counter
{
	int element;
	int count;
};

int solve(counter arr[],int low,int high,int key)
{
	while(low<=high)
    { 
        int mid = low + (high-low)/2;
        if(arr[mid].element==key)
            return arr[mid].count;
        else if(key<arr[mid].element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

int32_t main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	int n,k;
 	cin >> n >> k;
 	int num=-1;
 	int x=0,y=1;
 	counter arr[n];
 	for(int i=0;i<n;i++)
 	{
 		cin >> x;
 		if(x==y)
 		{
 			arr[num].count++;
 		}
 		else
 		{
 			num++;
 			arr[num].element=x;
 			arr[num].count=1;
 		}
 		y=x;
 	}
 	int ans=solve(arr,0,num,k);
 	cout << ans;


	return 0;
}
