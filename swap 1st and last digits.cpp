#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,n2,p,temp,unit,last,count=0;
	printf("enter number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	count=count-1;
	for(i=0;i<temp;i++)
	{
		unit = temp % 10;
	}
	p=pow(10,count);
	last=temp/p;
	n2=temp-unit+last-last*p+unit*p;
	printf("\nresut is %d",n2);
}
