# include<stdio.h>
# include<stdlib.h>
# include<time.h>
# define N 100
int main(void)
{	
	int begin=clock();
	int a[N],i,j,b;
	printf("生成随机数组:");
	for(i=0;i<100;i++)
	{
		a[i]=rand()%1000;
		printf("%4d",a[i]);
	}
		for(i=1;i<1000;i++)
			for(j=0;j<N-1;j++)
			if(a[j]>a[j+1])
		{
		b=a[j];
		a[j]=a[j+1];
		a[j+1]=b;
		}
	printf("\n 结果:");
	for(i=0;i<100;i++)
		printf("%4d",a[i]);
	printf("\n");
	int end=clock();
	int time=end-begin;
	printf("程序运行时间：%d毫秒",time);
	printf("\n");
	return 0;
}
