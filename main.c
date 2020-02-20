#include <stdio.h>
#include <stdlib.h>
int turn(int a);
int main()
{
  int value;
  while(scanf("%d",&value)==1)
  {
     while(value>=10)
     {
       value=turn(value);
     }
     if(value!=0)
     {
        printf("%d\n",value);
     }
  }

 return 0;
}
int turn(int a)
{
  int temp=0; 
  while(a>=10)
  {
    temp=temp+a%10;
    a=a/10;
  }
  temp=temp+a;
  return temp;
}


