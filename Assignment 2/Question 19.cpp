#include <bits/stdc++.h>
using namespace std;

#define int long long



int32_t main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	
 	int arr[8][8];
 	for(int i=0;i<8;i++)
 	{
 		for(int j=0;j<8;j++)
 		{
 		cin >> arr[i][j];
 		}
 	}
 	int count=0;

 	//horizontal
 	for(int i=0;i<8;i++)
 	{
 		count=0;
 		for(int j=0;j<8;j++)
 		{
 			if(arr[i][j])
 				count++;
 		}
 		if(count>1)
 		{
 			cout << "NO";
 			return 0;
 		}
 	}
 	//vertical
 	for(int j=0;j<8;j++)
 	{
 		count=0;
 		for(int i=0;i<8;i++)
 		{
 			if(arr[i][j])
 				count++;
 		}
 		if(count>1)
 		{
 			cout << "NO";
 			return 0;
 		}
 	}
 	//primarydiagonal
 	for(int k=7;k>=0;k--)
 	{
 		int i=0;
 		int j=k;
 		count=0;
 		while(i<8&&j<8)
 		{
 			if(arr[i][j])
 				count++;
 			i++;
 			j++;
 		}
 		if(count>1)
 		{
 			cout << "NO";
 			return 0;
 		}
 	}
 	for(int k=1;k<8;k++)
 	{
 		int i=k;
 		int j=0;
 		count=0;
 		while(i<8&&j<8)
 		{
 			if(arr[i][j])
 				count++;
 			i++;
 			j++;
 		}
 		if(count>1)
 		{
 			cout << "NO";
 			return 0;
 		}
 	}
 	//secondarydiagonal
 	for(int k=7;k>=0;k--)
 	{
 		int j=k;
 		int i=0;
 		count=0;
 		while(i<8&&j>=0)
 		{
 			if(arr[i][j])
 				count++;
 			i++;
 			j--;
 		}
 		if(count>1)
 		{
 			cout << "NO";
 			return 0;
 		}
 	}
 	for(int k=1;k<8;k++)
 	{
 		int i=k;
 		int j=7;
 		count=0;
 		while(i<8&&j>=0)
 		{
 			if(arr[i][j])
 				count++;
 			i++;
 			j--;
 		}
 		if(count>1)
 		{
 			cout << "NO";
 			return 0;
 		}
 	}
 	cout << "YES";

	return 0;
}
