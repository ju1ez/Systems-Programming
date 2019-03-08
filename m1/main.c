
#include <stdio.h>
int toString(char a[]) {
	int user_num = -1;
    int i, c;
	int err = 0;
	    for (i = 0; a[i] != '\0'; i++) {
	      //char to int
	      c = a[i];
	      //checks for uppercase
	      if (c < 97 || c > 122) {
	        err = 1;
	        break;
	      }
	      //char to int
	      c = c - 96;
	      if (user_num == -1) {
	        user_num = c;
	      } else {
	        if (c < 10)
	          user_num = user_num * 10 + c;
	        else
	          user_num = user_num * 100 + c;
	      }
	    }    
    if (err == 1) //if thers an uppercase return 0 otherwise return the user input
      return 0;
    else
      return user_num;
  }
int main() {
	int user_num, n2, n3, o, i, x, j, temp, err = 0, result[30];
	char str1[30], str2[30], option;	
		printf("This program performs pseudo arithmetic on strings. \n");	
		printf("Enter first string: ");
		scanf("%s", str1);
	user_num = toString(str1);
		printf("Enter second string: ");
		scanf("%s", str2);
		n2 = toString(str2);
	if (user_num * n2 == 0) {
	printf("No uppercase values allowed\n");
	
	return 0; 
	}	
	//menu
	printf("Please select pseudo arithmetic option:\n\t1:  (+) Addition\n\t2:  (-) Subtraction \n\t3:  (/) Division \n\t4:  (*) Multiplication\nUser Input: ");
		scanf("%d", &o);
		//switch for menu
	switch (o) {
		case 1:
			n3 = user_num + n2;
			option = '+';
		break;
		case 2:
			n3 = user_num - n2;
			option = '-';
		break;
		case 3:
			n3 = user_num / n2;
			option = '/';
		break;
		case 4:
			n3 = user_num * n2;
			option = '*';
		break;
		default:
			//ensure vaild entry is entered
			printf("\nInvalid Input\n");
			err = 1;
		break;
	}
	if (err == 1)
		return 0;
			printf("\tInput: %s%c%s\n", str1, option, str2);
		temp = n3;
		i = 0;
	while (temp > 0) {
		x = temp % 10;
		//get ASCII code
		n3 = x + 96;
		result[i] = n3;
		i++;
		temp = temp / 10;
	}
		//output
		printf("\tOutput: ");
		for (j = i - 1; j >= 0; j--) {
		printf("%c", result[j]);
		}
		printf("\n");
	return 0;
}
