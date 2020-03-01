#include<stdio.h>

int main()
{
	int n;
	char ans[100],i=0;
	scanf("%d",&n);
	while(n>0)
	{
		if (n%2==1)
			ans[i++]='1';
		else
			ans[i++]='0';
		n=n/2;
	}
	int j;
	for (j=i;j>=0;j--)
		printf("%c",ans[j]);
	printf("\n");
}