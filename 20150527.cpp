#include<stdio.h>
int main(void)
{
  int a[21];
  int i;
  a[1]=1;
  a[2]=1; /*定义变量赋值*/
  for(i=3;i<21;i++)
      a[i]=a[i-1]+a[i-2];/*设定a[i]数组*/
  for(i=1;i<21;i++)
  {
    printf("%10d",a[i]);/*输出数组*/
    if(i%5==0)
       printf("\n");/*如果a[i]被5整除 换行*/
  }
   return 0;
}
  
	
