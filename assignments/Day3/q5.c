#include<stdio.h>
int main() {
    int n,i=2;
    int isPrime=1;
    scanf("%d", &n);
    if(n<=1)isPrime=0;
    while((i*i<=n) && (isPrime)) {
        if(n%i==0) isPrime=0;
        i++;
    }
    printf(isPrime?"Yes\n":"No\n");
    return 0;
}