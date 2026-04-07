#include <stdio.h>
// afunction that swaps the two numbres
void swap(int *a, int *b);
int main(){
int X = 45, y = 98;
printf ("Before swapping: X = %d, y = %d \n",X ,y);
    swap(&X, &y);
    printf ("After swapping: X = %d, y = %d \n",X ,y);


    return 0;
}
void swap(int *a, int *b){
    int temp = *a;
        *a= *b;
        *b = temp;
}