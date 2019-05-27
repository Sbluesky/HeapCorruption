#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *buf=malloc(8);
	strcpy(buf, "AAAAAAAAA");
	buf[8]='\0';

}