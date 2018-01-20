#include <bits/stdc++.h>
using namespace std;

int a[1000][1000], b[1000][1000], c[1000][1000];

void matrixmultiplication(int m,int p,int n)
{
	//returns the product of a m*p and p*n matrix
	for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
}

int main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	
 	int m,p,n;
 	cin >> m >> p;
 	for(int i=0;i<m;i++)
 	{
 		for(int j=0;j<p;j++)
 		{
 			cin >> a[i][j];
 		}
 	}
 	cin >> p >> n;
 	for(int i=0;i<p;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			cin >> b[i][j];
 		}
 	}

 	matrixmultiplication(m,p,n);
 	int ans=0;
 	for(int i=0;i<m;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			ans+=  c[i][j];
 		}
 	}
 	cout << ans;
	return 0;
}




