
#include <stdio.h>
void my_strcpy(char s1[], char s2[], int i) //function that mimics strcpy
{
	s2[i] = s1[i];
	if(s1[i] == '\0'){return; }
	my_strcpy(s1, s2, i + 1);
}
int main() { //test program
	char s1[256], s2[256];
		printf("This program demonstrates library function strcpy(). \n");
		printf("Enter a string: ");
		scanf("%s", s1);
		
  	my_strcpy(s1, s2, 0);
  	
	printf("Your String = %s \n", s1);
  	printf("String Copied = %s \n", s2);
		
  	return 0;	
}

