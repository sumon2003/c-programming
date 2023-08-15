#include <stdio.h>
int main() {
	char upper;
	printf("Enter any upper case letter: ");
	scanf("%c", &upper);
	printf("The lower case letter is: %c\n", upper+32);
	return 0;
}

