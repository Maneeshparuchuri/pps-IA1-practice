#include <stdio.h>
int input()
{
  int a;
  printf("enter the value of a numbers to be added\n");
  scanf("%d",&a);
  return a;
}
int add(int a, int b)
  {
    int sum;
    sum=a+b;
    return sum;
  }
void output(int a,int b,int sum)
  {
   printf("sum of %d and %d is %d",a,b,sum);
 }
int main()
{
  int x,y,c;
  x=input();
  y=input();
  int sum = add(x,y);
  output(x,y,sum);
  return 0;
}