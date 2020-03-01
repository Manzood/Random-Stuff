#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <int> a(n);
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{

		int count_smaller=0;
		for (int j=0;j<n;j++)
		{
			if (a[j]<a[i])
				count_smaller++;
		}
		if (count_smaller==1)
			cout<<a[i]<<endl;
	}
}