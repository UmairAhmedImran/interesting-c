#include <stdio.h>

int main() {
  char line[1000];
  printf("Enter a line\n");
  scanf("%[^\n]1000s", line); 
  // read until you find a new line or 1000 characters
  printf("Line: %s\n", line);
}
