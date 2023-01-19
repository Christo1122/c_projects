#include <iostream>
using namespace std;
#include <stdlib.h>
#include <unistd.h>




int main() 
{
int hour=0,min=0,sec = 0;

cout<<"set time \"hr:min:sec\"\n";
cin>>hour;
cout<<":";
scanf(" %d", &min);
cout<<":";
scanf(" %d", &sec);

if(hour>24 || min > 60 || sec>60)
	cout<<"error enter the correct time";


while(true)
{
    system("clear");
    printf("\t#########\n");
    cout << "\t# " <<hour << ":"<< min << ":"<< sec << " #" << endl;
    printf("\t#########\n");
    sec += 1;
   
        if (sec >= 60)
        {
        min += 1;sec = 0;
        }
        if (min >= 60)
        {
            hour += 1;min = 0;
        }
        
        if(hour == 60)
        {
        hour = 0;
        }
    sleep(1);
}


return 0;
}
