
//03-18-2019
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
	if(argc > 1){
		int l;
		char n[100];
		FILE *fp = fopen(argv[1], "r");
		int j = 0;  
		if(fp != NULL){
			fscanf(fp, "%s", n);
			l = strlen(n);
			if (l >= 3 && l <= 15) j++;
			while (!feof(fp)) {
				fscanf(fp, "%s", n);
				l = strlen(n);
				if (l >= 3 && l <= 15) j++;
			}
		printf("Number of words of the inital words length: %d\n", j);		    
		}
	fclose(fp);
	}
return 0;
}
