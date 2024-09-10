#include <stdio.h> 

int main() 
{ 
	int myArray[] = { 1, 2, 3, 4, 5 }; 
	int arraySize = sizeof(myArray) / sizeof(myArray[0]); 
	printf("The size of the array is: %d\n", arraySize); 
    return 0; 
}
