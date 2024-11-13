#include<stdio.h>
void revarr(int* arr, int size) {
    int temp,*start=arr,*end=arr+size-1;
    while(start<end){
        temp=*start;                                  
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    revarr(arr, n);
    printf("Reversed array: ");
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}