#include <stdio.h>

int main() {
  char name[100];
  printf("Enter a name\n");
  scanf("%100s", name); 
  // there is no & in name because name is an array
  printf("Hello %s\n", name);
}
