#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

char* askForInteger(void) {
  char* number = malloc(MAX_DIGITS * sizeof(char));

  printf("Enter an integer: ");
  scanf(" %s", number);

  return number;
}

bool sameDigits(const int number) {}

int main() {
  char* number;

  do {
    number = askForInteger();
    puts(number);
    free(number);
  } while (true);

  return 0;
}
