#include <stdio.h>
#include <stdlib.h>

#define MAX 100
main() {


char line[MAX];
char c;
int i;

scanf("%c",&line[1]);
printf("%c\n",line[1]);


while(i<=MAX) {
line[i] = c;
scanf("%c",&line[i]);
i++;
if(i<=MAX)
printf("%s",line[i]);
}
/*
if (c == "\0")
	break;
	}
	line[MAX] = "\0";
*/




}
