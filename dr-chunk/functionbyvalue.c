#include <stdio.h>

int main () {
  int myval();
  int retval;

  retval = myval(6, 7);
  printf("Answer: %d\n", retval);
}

int myval(a,b)
  int a,b;
{
  int c = a * b;
  return c;
}
