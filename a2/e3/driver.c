
#include"inc_files.h"
int main() 
{ 
	printf("This program counts the 1-bits in the binary representation a decimal number: \n");
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Number of 1-bits: ");
    printf("%d", countBits(n));
	printf("\n"); 
    return 0; 
} 

