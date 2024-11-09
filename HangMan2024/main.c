#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "HangManFunc.h"
#include "UI.h"

// EvanT - For Fun - Hangman main file

char* wordOptions[WORDS] = { "Lobotomy", "Chamber", "Hernia", "Butternut", "Zebra", "Mississippi", "Ivy", "Luckier",
							 "Lumber", "Antidote", "Awkward", "Witchcraft", "Tethered", "Unwashed", "Peekaboo" };

int main(void) {

	bool cont = true;
    while (cont) {
        printWelcome();

      //  switch (menuOption)
      //  {
      //  case 5:

      //      randomWord(wordOptions);
      //  }
        cont = false;
    }
}

