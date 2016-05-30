# include<stdio.h>
# include<stdlib.h>
# define N 10	
int main(void)
{
	int a[N],i,j,b;
	printf("input:");
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%4d",a[i]);
	}
		for(i=1;i<10;i++)
			for(j=0;j<N-1;j++)
			if(a[j]>a[j+1])
	{
		b=a[j];
		a[j]=a[j+1];
		a[j+1]=b;
	}
	printf("\nresult:");
	for(i=0;i<10;i++)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}
