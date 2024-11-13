#include<stdio.h>
int main() {
    int power=2;
    while (power<=128){
        printf("%d\n",power);
        power *=2;
    }
    return 0;
}