#include <stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers");
  scanf("%d%d",a,b);
}
void find_sum (int a,int b, int *find_sum)
{
  *find_sum=a+b;
}
void output (int a, int b, int c)

{
  printf("sum%d+%d is %d\n",a,b,c);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  find_sum(x,y,&z);
  output(x,y,z);
  return 0;
}