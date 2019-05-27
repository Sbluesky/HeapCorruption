#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main (int argc, char **argv)
{
        char *buf1;
        char *buf2;
        char *buf3;
        buf1=(char *) malloc (128);
        buf2=(char *) malloc (128);
        printf("ad buf1: %p",buf1);
        printf("ad buf2: %p", buf2);
        strcpy(buf2,"Before free");
        free(buf2);
         strcpy(buf2,"This is a test");
        buf3 = (char *) malloc (128);
        printf("ad buf3: %p", buf3);
        strcpy(buf3, "This is buf3");
        printf("ad buf2 : %p", buf2);
        free(buf1);
        free(buf3);
}
