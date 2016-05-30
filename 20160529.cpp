# include<stdio.h>
# define N 10
int main(void)
{	
	int a[N];
	int * p=a,i;/*定义指针变量*/
	for(i=0;i<N;i++)
		scanf("%d",p++);/*输入数组*/
	p=a;/*指针p指向数组a*/
	for(i=0;i<N;i++)
		printf("%2d",*p++);/*利用指针输出数组*/
	return 0;
}
