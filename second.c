#include<stdio.h>

int main()
{
	int i,c,num=0;
	for (i=0;i<4;i++)
	{
		c=getchar();
		num+=c-'0';
		num=num*10;
	}
	printf("%d\n",num/10);
}