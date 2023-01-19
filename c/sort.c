//SORT AN ARRAY:
	 #include <stdio.h>

//function prototype
void sort(char array[], int size) {

for (int i = 0;i <size -1; i++)
{
	for(int j =0; j<size -1; j++){

		if(array[j] > array[j+1]){
			char temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
								}
							}
						}


}




int main() {
char array[] = {'a','z','b','c','d','g','h','b','a'};
int size = sizeof(array)/sizeof(array[1]);

sort(array,size);

printarray(array, size);
return 0;
} 

void printarray(char array[],int size){

for(int i =0;i < size;i++){
		
			printf("%c\t\a",array[i]);
								}
							


}
