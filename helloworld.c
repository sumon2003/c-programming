#include <stdio.h>
int main() {
	char upper,lower;
	printf("Enter any upper case letter: ");
	scanf("%c", &upper);
    lower = tolower(upper);
	printf("The lower case letter is: %c\n", lower);
	return 0;
}

