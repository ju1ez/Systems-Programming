
#include <stdio.h>
int mydecToHexa(int n) 
{ 
	int r, x, i = 0;	
    int hnum[100]; //array for hex number
    
    while (n != 0){
        r = n % 16;
        if (r < 10)
            hnum[i++] = 48 + r;
        else
            hnum[i++] = 55 + r;
       		n = n / 16;
    }
    for (x = i; x >= 0; x--)
    	
        printf("%c", hnum[x]);
        printf("\n");
        
    return 0;
	}
