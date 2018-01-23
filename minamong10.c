#include<stdio.h>
int main()
{
int num[100],i,j,t;
for(i=0;i<10;i++)
scanf("%d",&num[i]);
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(num[i]>num[j])
		{
		t=num[i];
		num[i]=num[j];
		num[j]=t;
	}
	}
}
printf("%d",num[0]);
	return 0;
}
