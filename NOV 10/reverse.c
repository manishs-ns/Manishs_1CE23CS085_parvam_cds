#include<stdio.h>
void reversearray(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }

}
int main(){
    int n;
    printf("enter the no of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reversearray(arr,n);
    printf("reversed array: \n");
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }
     return 0;

}
