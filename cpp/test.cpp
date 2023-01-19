#include <stdio.h>

#include <iostream>
using namespace std;

///funcion prototypes/////////////////////////////////////////////////////
int number();
int ascii();
char vowel();
void linemaker(int line);
int calculator();

///////////////////////////////////////////////////////////////////////////////////
 int main()
{
printf("PROGRAMS(IN C++)\n");
int chooser;
for(;;)  	{
linemaker(40);	
printf("\n\n 1 : ascii value printer (prints the ascci value)\n 2 : number printer\n 3 : vowel sorter\n 4: calculator \n 0: for exiting\n ");
linemaker(40);
cin>>chooser;

switch(chooser) {
case 1: ascii();break;
case 2:number();break;
case 3:vowel();break;
case 4: calculator();break;

default:cout<<"Error";int main();break;
case 0 :return 0;	
				}
			
			}		

return 0;

}



int number() {

int i,j;
cout<<"Type the value of numbers: ";
cin>>j;

for(i = 0;i<=j;i++){
cout<<i<<"\n";
			}
return 0;
	     }

char vowel() {
char ch;
cout<<"Enter the  letter";
cin>>ch;

switch(ch)
	{
	case 'A' :
	case 'a' :
	case 'E' :
	case 'e' :
	case 'I' :
	case 'i' :
	case 'O' :
	case 'o' :
	case 'U' :
	case 'u' : cout<<"vowel\n";
	break;
	default:cout<<"not a vowel / is a constant\n";
	break;
	}	
	return 0;
	    }
	    
	    
int ascii() 
{
	
char ch;
int charint;	
cout<<"hello\ntype a char"<<endl;
cin>>ch;
charint = ch;
cout<<"The ascii value of "<<ch<<" is "<<charint<<"\n";
	
return 0;	
}



int calculator()
{
printf("%50s\n","CALCULATOR");
linemaker(120);
double firstn,secondn;
int operation;
cout<<"type the first number: ";
cin>>firstn;
cout<<"TYPE THE SECOND NUMBER: ";
cin>>secondn;	
cout<<"choose the operator: \n";
printf("%10s\n%10s\n%10s\n%10s\n","1 >> +(addition)","2 >> -(substraction)","3 >> * (multiplication)","4 >> / (division)\n 0 for exiting the calculator");	
cin>>operation;

switch(operation)
{
case 1 : cout<<firstn+secondn<<"\n";calculator();break;
case 2 : cout<<firstn-secondn<<"\n";calculator();break;
case 3 : cout<<firstn * secondn<<"\n";calculator();break;
case 4 : cout<<firstn/secondn<<"\n";calculator();	break;
case 0 : cout<<"exit";break;
default : cout<<"Error type the correct number";calculator();break;

}		


	
return 1;
}

void linemaker(int lines)
{
int j;

for(j =0;j<=lines;j++)
cout<<"_";	
cout<<"\n";	
}
