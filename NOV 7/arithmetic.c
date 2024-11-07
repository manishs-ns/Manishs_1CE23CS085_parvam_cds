#include<stdio.h>
int main(){
    double a=5;
    double *ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    ptr--;
    printf("%d",ptr);
}