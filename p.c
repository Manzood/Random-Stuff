#include<stdio.h>

int main()
{
	int n,counter=1;
	int ans=0;
	scanf("%d",&n);
	while (n>0)
	{
		ans+=(n%2)*(counter);
		counter*=10;
		n=n/2;
	}
	printf("%d\n",ans);
}