
#include <bits/stdc++.h>
using namespace std;

void thousandorhundredorunit(int n)
{
	if(n==0)
	{

	}
	else if(n==1)
		cout << "One ";
	else if(n==2)
		cout << "Two ";
	else if(n==3)
		cout << "Three ";
	else if(n==4)
		cout << "Four ";
	else if(n==5)
		cout << "Five ";
	else if(n==6)
		cout << "Six ";
	else if(n==7)
		cout << "Seven ";
	else if(n==8)
		cout << "Eight ";
	else
		cout << "Nine ";
}
void tenthplace(int n)
{
	if(n==0)
	{

	}
	else if(n==1)
		cout << "Ten ";	
	else if(n==2)
		cout << "Twenty ";
	else if(n==3)
		cout << "Thirty ";
	else if(n==4)
		cout << "Forty ";
	else if(n==5)
		cout << "Fifty ";
	else if(n==6)
		cout << "Sixty ";
	else if(n==7)
		cout << "Seventy ";
	else if(n==8)
		cout << "Eighty ";
	else
		cout << "Ninety ";
}

void tentotwenty(int n)
{
	if(n==11)
		cout << "Eleven ";
	else if(n==12)
		cout << "Twelve ";
	else if(n==13)
		cout << "Thirteen ";
	else if(n==14)
		cout << "Fourteen ";
	else if(n==15)
		cout << "Fifteen ";
	else if(n==16)
		cout << "Sixteen ";
	else if(n==17)
		cout << "Seventen ";
	else if(n==18)
		cout << "Eighteen ";
	else
		cout << "Nineteen ";
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
int n;
cin >> n;

if(n==0)
{
	cout << "Zero";
	return 0;
}

if(n/1000)
{
	thousandorhundredorunit(n/1000);
	cout << "Thousand ";
}
if((n/100)%10)
{
	thousandorhundredorunit((n/100)%10);
	cout << "Hundred ";
}

int x=n%100;
if((n/1000||(n/100)%10)&&x!=0)
	cout << "and ";

if(x>10&&x<20)
{
	tentotwenty(x);
}

else
{
	tenthplace(x/10);
	thousandorhundredorunit(x%10);
}
	


	return 0;
}
