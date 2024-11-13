#include<stdio.h>
int main(){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter the values:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int elem;
    printf("enter the element to insert: ");
    scanf("%d", &elem);
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=elem;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}