#include<stdio.h>
int main(){
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("array elements are \n");
    for(int i=0;i<size;i++){
         printf("%d ",arr[i]);
    }
}