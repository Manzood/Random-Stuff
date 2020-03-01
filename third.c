#include<stdio.h>

int main()
{
	unsigned int n;
	scanf("%u",&n);
	int x=1,count=0;
	while(x<=n)
	{
		if (x&n)
			count++;
		x=x<<1;
	}
	printf("%d\n",count);
}