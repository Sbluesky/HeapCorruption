#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
  int b=180;
  int *a;
  a=&b;
  char *buf1R1;
  char *buf2R1;
  buf1R1 = (char *) malloc(*a);
  free(a);
  buf2R1 = (char *) malloc(*a);
  strcpy(buf2R1,"Test");
  free(buf1R1);
  free(buf2R1);

}
