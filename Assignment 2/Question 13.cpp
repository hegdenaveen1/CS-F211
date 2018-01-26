
#include <bits/stdc++.h>
using namespace std;

struct abc
{
int data;
int arr;
};

bool compar(abc x,abc y)
{
	if(x.data==y.data)
		return x.arr<y.arr;
	return x.data<y.data;
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
int n;
cin >> n;

vector<abc> a(n),b(n),c(n);

for(int i=0;i<n;i++)
{
	cin >> a[i].data;
	a[i].arr=1;
}

for(int i=0;i<n;i++)
{
	cin >> b[i].data;
	b[i].arr=2;
}

for(int i=0;i<n;i++)
{
	cin >> c[i].data;
	c[i].arr=3;
}

vector<abc> comb(3*n);

int i=0,j=0;

while(j<n)
{
	comb[i]=a[j];
	i++;
	j++;
}
j=0;
while(j<n)
{
	comb[i]=b[j];
	i++;
	j++;
}
j=0;
while(j<n)
{
	comb[i]=c[j];
	i++;
	j++;
}

sort(comb.begin(),comb.end(),compar);



int ans1=a[0].data;
int ans2=b[0].data;
int ans3=c[0].data;

int answer = abs(ans2-ans1)+abs(ans3-ans2)+abs(ans3-ans1);
int finalanswer=answer;

for(i=0;i<3*n;i++)
{
	if(comb[i].arr==1)
		ans1=comb[i].data;
	else if(comb[i].arr==2)
		ans2=comb[i].data;
	else
		ans3=comb[i].data;


	answer = abs(ans2-ans1)+abs(ans3-ans2)+abs(ans3-ans1);
	finalanswer = min(finalanswer,answer);
}

cout << finalanswer;




	return 0;
}
