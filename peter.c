#include <stdio.h>
#include <string.h>
int main(){ 


int len= strlen("hello");
    for (int i=1; i <= len; i++)
    printf("%.*s \n", i, "hello");
    return 0;
}