#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 10

char* askForInteger(void) {
  char* number = malloc(MAX_DIGITS * sizeof(char));

  printf("Enter an integer: ");
  scanf(" %s", number);

  return number;
}

bool sameDigits(const char* number) {
  if (strlen(number) < 2) {  // Check length of string
    return false;
  }
  for (int i = 0; i < strlen(number) - 1; i++) {
    if (number[i] != number[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  char* number;
  bool meetsRule;

  do {
    number = askForInteger();
    meetsRule = sameDigits(number);
    free(number);
  } while (!meetsRule);

  return 0;
}

// "11111"
