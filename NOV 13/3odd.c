#include<stdio.h>
int isConsecutive(int n,int a[]){
    for(int i=0;i<n-2;i++){
        if((a[i]%2!=0) && (a[i+1%2!=0]) &&(a[i+2%2!=0])){
            return 1;
        }

    }
    return 0;

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d ",isConsecutive(n,a));
}