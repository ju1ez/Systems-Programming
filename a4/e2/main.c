
//03-18-2019
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
	if(argc > 1){
		int l;
		char n[100], j[100];
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL){
			printf("Please enter a string to search for: ");
			//fgets(n, sizeof(n), stdin);
			scanf("%s", n);
			l = strlen(n);
				while(fscanf(fp, "%s", j) != EOF){
				if(strncmp(n, j, l) == 0){
				printf("%s\n", j);
				}
			}
		}
	fclose(fp);
	}
return 0;
}
