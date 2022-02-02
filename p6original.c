#include<stdio.h>
void input_two_string(char *a,char *b)
{
  
  printf("enter the string\n");
  scanf("%s %s",a,b);
      
}
int strcmp(char *a,char *b)
{
  int i;
  for(i=0;a[i] !='\0'&& b[i]!='\0';i++)
  {
  if(a[i]>b[i])
  {
    return 1;
  }
  if(b[i]>a[i])
  {
    return -1;
  }
  if(a[i]==b[i])
  {
    continue ;
  }
  }
}

void output( char *a,char *b,int result)
{
  if(result=1)
  {
  printf("%s is grater than %s\n",a,b);
  }
  if(result=-1)
  {
      printf("%s is grater than %s\n",b,a);
  }
  if(result==0)
  {
      printf("%s equval to %s",a,b);
  }
}
int main()
{
    char a[20],b[30];
    int ans;int result;
input_two_string(a,b);
ans=strcmp(a,b);
output(a,b,result);
return 0;
} 
