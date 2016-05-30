#include<stdio.h>
int main(void)
{
  int a[21];
  int i;
  a[1]=1;
  a[2]=1;
  for(i=3;i<21;i++)
      a[i]=a[i-1]+a[i-2];
  for(i=1;i<21;i++)
  {
    printf("%10d",a[i]);
    if(i%5==0)
       printf("\n");
  }
   return 0;
}
  
	
