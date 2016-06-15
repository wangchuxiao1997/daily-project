#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void QuickSort(int a[],int k)
{		
        int i=0,j=k-1;
        int first=a[0];
        if(k<=1)
        {
                return ;
        }
        while(i<j)
        {
                for(;j>i;j--)
                {
                        if(a[j]<first)
                        {
                                a[i++]=a[j];
                                break;
                        }
                }
                for(;i<j;i++)
                {
                        if(a[i]>first)
                        {
                                a[j--]=a[i];
                                break;
                        }
                }
        }
        a[i]=first;
        QuickSort(a,i);
        QuickSort(a+i+1,k-i-1);
}
int main(void)
{		
		int begin=clock();
        int a[100];
        int i = 0;
        printf("随机数组生成:\n");
        for(i=0;i<100;i++)
        {
                a[i] = rand() % 1000;
                printf("%4d,",a[i]);
        }
        printf("\n");
        QuickSort(a,100);
        printf("结果: \n");
        for(i=0;i<100;i++)
                printf("%4d,",a[i]);
        printf("\n");
		int end=clock();
		int time=end-begin;
		printf("程序运行时间;%d毫秒\n",time);
        return 0;
}
