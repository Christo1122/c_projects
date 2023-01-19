#include <stdlib.h>
#include <stdio.h>

#define f_high 100
#define f_low 0
#define step 10

int main() {

float f;
int c;
system("banner temperature");
system("banner calculator");
line(170);

printf("\a\n%3s\t%10s\n","celsius" , "farenheit");
line(18);
for (c = f_low; c <= f_high; c += step) {
f= c*1.8+32;
printf("%3d \t %10.2f \n",c, f);
}

line(170);


converter();
}

int converter() {
printf("celsius(c) or farenheit(f)\n");
char scale;
scanf("%c\n",&scale);
int number,final;char symbol;
int boo = 0;

if(scale == "c")
{
printf("enter your number in celsius scale\n");
 number;
scanf("  %d\n",&number);
 final = (number-32)*5/(float)9;
 symbol = "f";
boo = 1;}

else if (scale == "f" & boo == 0){
 symbol = "f";
 number;
printf("enter your number in farenheit scale\n");
scanf("%d\n",&number);
 final =  number*9/(float)5 + 32;
 boo = 1;}

else{printf("error:keyword doesn't match\n");}


if(boo == 1){
line(70);
printf("number  is  %d%c \n", final,symbol);


}}


int line(x) {
int o =0;
while ( o<x) {
printf("_");
o += 1;
}
printf("\n");
}
