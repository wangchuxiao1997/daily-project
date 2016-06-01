# include<stdio.h>
struct student
{
	int number;
	char name[10];
	int score;
}; /*定义结构体数据类型*/
int main(void)
{
	struct student qwe={1,"wang",100};/*定义结构体变量qwe，输入数据*/
	printf("name:%4c",qwe.name);
	printf("score:%4d",qwe.score);/*输出数据*/
	printf("\n");
	return 0;
}
