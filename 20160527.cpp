# include<stdio.h>
int main(void)
{
  char word[10];
  int i;
  printf("input");
  for(i=0;i<10;i++) /*建立字符数组*/
	scanf("%c",&word[i]);
  printf("output:");
  for(i=9;i>=0;i--)/*逆序输出数组*/
	printf("%c",word[i]);
  printf("\n");
  return 0;
}
