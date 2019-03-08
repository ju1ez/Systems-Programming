
int binConv(int n){
	int i, j;
	for (i = 31; i >= 0; i--){
	j = n >> i;
	
		if (j & 1)
		    printf("1");
		else
		    printf("0");
		}
	return 0;
}
