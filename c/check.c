#include <stdio.h>
int main()
{
  int a,b,c,x;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
 if(a>b && a>c) { x =a;}
  if(a<b && b>c) { x =b;}
  if(c>b && a<c) { x =c;}

  
  printf("%d",x);
  
}
