#include <stdio.h>
#include <stdlib.h>
int main()
{
  int lucky = 23;

  printf("Value: %i \n", lucky);
  printf("Address: %p\n", &lucky);

  char hello[] = "Hi mom";

  char *str = malloc(4);
  str[0] = 'h';
  str[1] = 'e';
  str[2] = 'y';
  str[3] = '\0';

  printf("String: %s\n", str);
  printf("String Hello mom : %s\n", hello);
  free(str);
  return 0;
}

struct Hummanoid {
  char dna[50];
  int  age;
  float weight;

};
