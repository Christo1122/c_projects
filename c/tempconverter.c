#include <stdio.h>
#include <stdlib.h>

int main() 
{

int symbol,value;
float finalvalue;
char fsymbol;

printf("TYPE\n1 for C\n2 for F\n");
scanf(" %d",&symbol);

/*switch(symbol) {
case '1':printf("value");scanf("%d\n",&value);printf("%f%s\n",value*9/(float)5 + 32,"F");break;
case '2':printf("value");scanf("%d\n",&value);printf("%f%s\n",(value-32)*5/(float)9,"C");break;
//else:printf("error");
}
*/

if(symbol == 1) {
printf("type in the value:\b");
scanf(" %d\n",&value);
finalvalue=value*9/5 + 32;
fsymbol='F';	
				}
else if(symbol == 2) {
printf("type in the value:\b");
scanf(" %d\n",&value);
finalvalue=(value-32)*5/(float)9;
fsymbol = 'C';	
				}
				
else{printf("error");  }				

printf("%f%c\n",finalvalue,fsymbol);


if(symbol == 1)
printf("success");

else if (symbol == 2)
printf("success");

else
printf("error");



} 
