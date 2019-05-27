#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char buf[3];
	strcpy (buf, argv[0]);
	printf("%s", buf);
}