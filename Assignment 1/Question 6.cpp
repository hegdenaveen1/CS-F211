#include <bits/stdc++.h>
using namespace std;



int main()
{
       
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
 	
 	int C,N,P;
 	cin >> C >> N >> P;
 	int ans=1;
 	while(N--)
 	{
 		ans=(ans*C)%P;
 	}
 	cout << ans;

	return 0;
}
