
#include <stdio.h>
char my_strcmp(char s1[], char s2[]) //function that mimics strcmp
{
	int cmp = 0;
  	while(s1[cmp] == s2[cmp]){
	  if(s1[cmp] == '\0' && s2[cmp] == '\0') break; cmp++; }
	
	return s1[cmp] - s2[cmp];
}
int main() { //test program
	char s1[256], s2[256];
	char r;
		printf("This program demonstrates library function strcmp(). \n");
		printf("Enter string one: ");
		scanf("%s", s1);
		
		printf("Enter string two: ");
		scanf("%s", s2); 
		
  	r = my_strcmp(s1, s2);
  	
	if(r < 0){
		printf("S1 < S2: -1 \n"); }
	else if(r > 0){
		printf("S1 > S2: 1 \n"); }
	else{
		printf("S1 = S2: 0 \n"); }
		
  	return 0;	
}

