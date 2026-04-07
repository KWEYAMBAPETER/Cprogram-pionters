#include <stdio.h>
int main(){
int x = 45;
char grade = 'A';
float pi = 3.14;

//assigning pointers
int *ptr_x = &x;
char *ptr_grade = &grade;
float *ptr_pi = &pi;
printf("The value of X is: %d \n", x);
printf("the location of X : %p", &x);


    return 0;
}