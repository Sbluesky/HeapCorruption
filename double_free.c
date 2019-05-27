#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
  char *buf1R1;
  char *buf2R1;

  buf1R1 = (char *) malloc(128);
  buf2R1 = (char *) malloc(128);
  strcpy(buf2R1,"Test");
  free(buf1R1);
  free(buf2R1);
  free(buf2R1);

}