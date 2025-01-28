#include <stdio.h>

int main() {
  int age;
  printf("What is your age?: ");
  scanf("%d", &age); // if I give wrong input it gives value of previous process stored in that address
  printf("You are %d years old", age);
  return 0;
}
