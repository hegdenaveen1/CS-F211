#include <bits/stdc++.h>
using namespace std;

bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  {
  	return (false);
  }
 for( int k = 1; 36*k*k-12*k < number;++k)
  	{
  	if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   		{
   			return (false);
   		}
	}
  return true;
}

int counter(int n)
{
	int count=0;
	while(n%2==0)
	{
		count++;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i=i+2)
	{
		if(IsPrime(i))
		{
			while(n%i==0)
			{
				count++;
				n/=i;
			}
		}
	}
	if(IsPrime(n))
		count++;
	return count;
}


int main()
{
	int n;
	cin >> n;
	cout << counter(n);

	return 0;
}