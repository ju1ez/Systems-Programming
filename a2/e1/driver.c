
#include "inc_files.h"
int main(){
int n;
	printf("This program converts a decimal into binary: \n");
	printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("The binary representation is: ");
    printf(binConv(n));
    printf("\n");
}

