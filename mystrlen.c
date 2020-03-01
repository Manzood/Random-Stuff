#include<stdio.h>

int mystrlen(char *y)
{
	if (*y=='\0')
		return 0;
	else
		return 1+mystrlen(y+1);
}

int main()
{
	char x[10]="Hello\n";
	printf("%d\n",mystrlen(x));
	return 0;
}