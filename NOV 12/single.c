#include<stdio.h>
int main(){
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    printf("%d",result);

}