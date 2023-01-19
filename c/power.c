#include <stdio.h>
int main()
{
   int n,i=0,j=1,x=0;
   
   scanf("%d",&n);
   
while(x<n){
    
     printf("%d %s",i,", ");
    i = j-i;
     j= i+j;
     ++x;
    }
     printf("%d",i);
   }






