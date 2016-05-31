#include<stdio.h>
int main(void)
{
	int *p1,*p2,*p,a,b;
	printf("input：");
	scanf("%d,%d",&a,&b);
	p1=&a;/*将变量地址赋予指针*/
	p2=&b;
	if(a<b)
	{         /*交换指针变量*/
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("output:%d,%d\n",*p1,*p2);
	return 0;
}
