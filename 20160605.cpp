#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)/*控制行的输出*/
		{
			for(j=1;j<=i;j++)/*控制每列数的输出*/
				{
					printf("%d*%d=%d ",i,j,i*j);/*数的相乘*/
				}
			printf("\n");/*换行*/
		}
	return 0;
}
