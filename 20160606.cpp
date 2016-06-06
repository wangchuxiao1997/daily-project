#include <stdio.h>
 
int main()
{
    double m=1;
    int n;
    int i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        m=m*2;
    }
    printf("sum=%0.0lf\n",m);//第n格麦子的数量
    return 0;
}
