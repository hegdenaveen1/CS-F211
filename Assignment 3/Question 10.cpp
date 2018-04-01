#include <bits/stdc++.h>
using namespace std;


struct pairs
{
int count;
string name;
};

bool sortpairs(pairs a,pairs b)
{
	if(a.count==b.count)
		return a.name<b.name;
	return a.count<b.count;
}

int BubbleSort(vector<int> v,int first,int last)
{
  bool sorted=false;
  int count=0;
  int i=first+1;
  while(i<=last&&!sorted)
  {
    sorted=true;
    for(int j=first+1;j<=last;j++)
    {
      if(v[j-1]>v[j])
    {
      swap(v[j-1],v[j]);
      count++;
      sorted=false;
    }
    }
    i++;
  }
  return count;
}

int InsertionSort(vector<int> v,int start,int end)
{
	int count=0;
for(int i=start+1;i<=end;i++)
{
  int key=v[i];
  int j=i-1;
  while(j>0&&v[j]>key)
  {
    v[j+1]=v[j];
    j--;
    count++;
  }
  v[j+1]=key;
  count++;
}
return count;
}

int SelectionSort(vector<int> vect, int start,int end)
{
	int count=0;
  while(start!=end)
  {
    int minimumindex=start,minimum=vect[start];
  for(int i=start+1;i<=end;i++)
  {
    if(vect[i]<minimum)
    {
      minimum=vect[i];
      minimumindex=i;
    }
  }
  swap(vect[start],vect[minimumindex]);
  count++;
  start=start+1;
  }
  return count;
}



int32_t main()
{

	    FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
int n;
cin >> n;
vector<int> v(n);

for(int i=0;i<n;i++)
{
	cin >> v[i];
}

vector<pairs> v2(3);

v2[0].count = BubbleSort(v,0,n-1);
v2[0].name = "BubbleSort";
v2[1].count = InsertionSort(v,0,n-1);
v2[1].name = "InsertionSort";
v2[2].count = SelectionSort(v,0,n-1);
v2[2].name = "SelectionSort";


sort(v2.rbegin(),v2.rend(),sortpairs);

cout << v2[2].name <<  " " << v2[2].count;

return 0;
}