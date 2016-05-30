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
		printf("%4d",a[i]);/*生成10个随机数输出*/
	}
		for(i=1;i<10;i++)
			for(j=0;j<N-1;j++)
			if(a[j]>a[j+1])
	{
		b=a[j];
		a[j]=a[j+1];
		a[j+1]=b;
	}/*双循环排大小 交换赋值*/
	printf("\nresult:");
	for(i=0;i<10;i++)
		printf("%4d",a[i]);/*按排好的从大到小顺序输出*/
	printf("\n");
	return 0;
}
