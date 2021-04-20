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
  for (int i = 0; i < strlen(number) - 1;
       i++) {  // Until second to the last number
    if (number[i] != number[i + 1]) {
      return false;
    }
  }
  return true;
}

bool uniqueAscendingDigits(const char* number) {
  for (int i = 0; i < strlen(number) - 1; i++) {
    if (number[i] >= number[i + 1]) {  // If first number is greater than next
                                       // number, return false
      return false;
    }
  }
  return true;
}

int main() {
  char* number;
  bool meetsSame = false, meetsUniqueAscending = false;

  do {
    number = askForInteger();

    if (!meetsSame) {  // If it is already true, no need to check again
      meetsSame = sameDigits(number);
    }
    if (!meetsUniqueAscending) {
      meetsUniqueAscending = uniqueAscendingDigits(number);
    }
    free(number);
  } while (!(meetsUniqueAscending && meetsUniqueAscending));

  return 0;
}
