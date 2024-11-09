#include <stdio.h>

#include "UI.h"

printWelcome() {

	printf("=== Welcome to Hangman! ===\n");
	printf("=                         =\n");
	printf("=                         =\n");
	printf("=                         =\n");
	printf("=                         =\n");
	printf("=                         =\n");
	printf("=                         =\n");
	printf("===========================\n");

}

void printLetterSelect(char* letterList[LETTERS])

/*

printf("=                         =\n");
printf("=     |'''''''|           =\n");
printf("=     |		  O           =\n");
printf("=     |      `|`          =\n");
printf("=     |      /|           =\n");
printf("=     |                   =\n");
printf("===========================\n");

*/