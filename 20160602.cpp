# include<stdio.h>
int main(void)
{
	int data[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};/*二维数组 ，i行j列，元素初始化*/
	int i,j,sum=0;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			sum+=data[i][j]; /*数组元素求和*/
	printf("sum=%d\n",sum);
	return 0;
