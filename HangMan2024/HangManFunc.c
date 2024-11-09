#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "HangManFunc.h"

// EvanT - For Fun - Hangman funcs


// Array of words										   [X]

// Randomizer to choose word from array					   [ ]

// Allow user to input letter							   [ ]

// Tell user if the letter is correct or not + where it is [ ]

// win loss situations                                     [ ]
	// while loop because you dont know end point



// pick a random word func
void randomWord(char* wordOptions[WORDS]) {
	srand(time(NULL));
	int value = rand() % (WORDS);
	int savedValue = 0;

	if (savedValue == value && value != 0) {
		value - 1;
		printf("%s\n", wordOptions[value]);
	}

	else if (savedValue == value && value == 0) {
		value + 1;
		printf("%s\n", wordOptions[value]);
	}

	else
		printf("%s\n", wordOptions[value]);

	return savedValue = value;
}