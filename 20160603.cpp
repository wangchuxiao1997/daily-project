# include<stdio.h>
# define N 50
int main(void)
{
	int a,b,t;
	printf("input a,b:");
	scanf("%d,%d",&a,&b);
	while((t=a%b)!=0) /*继续相除，直到余数为0*/
	{	
		a=b;
		b=t;
	}
	printf("result:%d\n",b);
	return 0;
}
