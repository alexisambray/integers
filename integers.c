#include <stdbool.h>
#include <stdio.h>

#define MAX_DIGITS 10

void askForInteger(char* number[MAX_DIGITS]) {
  printf("Enter an integer: ");
  scanf(" %s", number);
}

bool sameDigits(const int number) {}

int main() {
  char number[MAX_DIGITS];

  do {
    askForInteger(number);
    puts(number);
  } while (true);

  return 0;
}
