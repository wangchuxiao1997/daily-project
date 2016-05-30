#include<stdio.h>
#define N 10
int main(void)
{
  int a[N],i,j; /*定义变量*/
  for(i=0;i<N;i++) /* for循环 输入 0-9*/
  	scanf("%d",&a[i]);     
	for(i=0;i<N-1;i++) 
	 if(a[i]>a[i+1]) /*排序,如果a[i]>a[i=1],交换变量的值*/
 	{ 
	 a[N+1]=j;
	 a[N+1]=a[N];
	 a[N]=j;
	}
	for(i=0;i<N;i++)/*输出*/
	  printf("%d",a[i]);
	return 0;
}         
