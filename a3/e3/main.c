
#include <stdio.h>
char my_strcat(char s1[], char s2[]) //function that mimics strcat
{
	char x, y = 0;
	
		while( s1[x]!='\0'){
		x++;
		}
	  	while( s2[y]!='\0'){
			s1[x] = s2[y];
		  	x++;
		  	y++;
	  	}
	  	
  	s1[x] = '\0';
}
int main() { //test program
	char s1[127], s2[127];	//fgets() only allows 128 in buffer
		printf("This program demonstrates library function strcat(). \n");
		printf("Enter the first string: ");	
		//scanf("%d", s1);
		//gets(s1); allows for spacing - depreciated 
		fgets(s1, sizeof(s1), stdin); // safer to use than gets() <- can cause overflow/buffering issues, only would use to allow for spacing
		
		printf("Enter the second string: ");
		//scanf("%s", s2); 
		fgets(s2, sizeof(s2), stdin);
		 
	my_strcat(s1, s2);
	
  		printf("String after concatenatating = %s \n", s1);
  		
  	return 0;	
}

