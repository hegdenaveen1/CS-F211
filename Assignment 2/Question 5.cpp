#include <bits/stdc++.h>
using namespace std;


int32_t main()
{
		FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

	int arr[6][6];
	int count=0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin >> arr[i][j];
			if(arr[i][j])
				count++;
		}
	}
	if(count>=10)
	{
		cout << "Not Sparse";
		return 0;
	}
	else
	{
		
		int cnt=-1;
		cout << "Sparse Matrix Representation\n\n";
		cout << "\t\t\trow\tcol\tvalue\n";
		cout << "Array";

		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
			{
				if(arr[i][j])
				{
					cnt++;
					if(cnt)
					{
						cout << "\t [" << cnt << "]" << "\t" << i << "\t" << j << "\t" << arr[i][j] << "\n";  
					}
					else
					{
						cout << "[" << cnt << "]" << "\t" << i << "\t" << j << "\t" << arr[i][j] << "\n";  
					}
				}
			}
		}

		cnt=-1;
		cout << "\n\nSparse Transpose Matrix Representation\n\n";
		cout << "\t\t\trow\tcol\tvalue\n";
		cout << "Array";

		for(int j=0;j<6;j++)
		{
			for(int i=0;i<6;i++)
			{
				if(arr[i][j])
				{
					cnt++;
					if(cnt)
					{
						cout << "\t [" << cnt << "]" << "\t" << j << "\t" << i << "\t" << arr[i][j] << "\n";  
					}
					else
					{
						cout << "[" << cnt << "]" << "\t" << j << "\t" << i << "\t" << arr[i][j] << "\n";  
					}
				}
			}
		}
	}

	return 0;
}
