#include <stdbool.h>
#include <stdio.h>

int askForInteger(void) {
  int number;
  printf("Enter an integer: ");
  scanf(" %d", &number);

  return number;
}

bool sameDigits(const int number) {}

int main() {
  do {
    int number = askForInteger();
  } while (true);

  return 0;
}
