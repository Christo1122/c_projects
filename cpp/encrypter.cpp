#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main() {
char code = 'd';
char fileName[30], ch;
fstream fps, fpt;
cout <<"enter the file name: ";
cin>>fileName;
fps.open(fileName, fstream::in);
if(!fps){
	
return 0;
}

fpt.open("tmp.txt", fstream::out);
if(!fpt){
cout<<"error while opening the tmp file";
return 0;
}

while(fps>>noskipws>>ch){
ch = ch + code;
fpt<<ch;
}
fps.close();
fpt.close();

fps.open(fileName, fstream::out);

if(!fps){
cout << "\nerror, opening tmp file";
return 0;}

while (fpt>>noskipws>>ch)
	fps<<ch;

fps.close();
fpt.close();
cout<<"\nFile '"<<fileName<<"' Encrypted successfully";
cout << endl;
return 0;

}
