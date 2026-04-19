// can we print something character by character?
// ok
#include <stdio.h>
#include <string.h>
int main(){

int len = strlen("Engineer");
for(int i = 1; i <= len; i++)
printf("%.*s \n", i, "Engineer");

    return 0;
}