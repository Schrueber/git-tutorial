#include <stdio.h>

#include "espl_lib.h"

int main() {
	unsigned int number;
	char yes_no;

	do {
		printf("\nInsert a number: ");
		scanf("%u", &number);
		printf ("\n%s\n\nDo you want to insert a new number? [y/n] ", num_to_words(number));
		scanf(" %c", &yes_no);
	} while(yes_no == 'y');
	return 0;
}
