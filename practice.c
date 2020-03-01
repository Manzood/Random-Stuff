#include<stdio.h>
#include<string.h>

int mystrlen(char str[])
{
	int i=0;
	while (str[i])
		i++;
	return i;
}

int myatoi(char numstr[])
{
	int n=mystrlen(numstr);
	int ans=0,i;	
	for (i=0;i<n;i++)
	{
		ans+=numstr[i]-'0';
		ans=ans*10;
	}
	return ans/10;
}

myitoa(int num,num_str[])
{
	int test=1;
	int count=-1;
	while(test<num)
	{
		test=test*10;
		count++;
	}
				
}

int main()
{
	char numstr[100];
	scanf("%s",numstr);
	printf("%d",myatoi(numstr));
	return 0;
}