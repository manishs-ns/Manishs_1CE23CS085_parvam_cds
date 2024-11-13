#include<stdio.h>
int countElement(int* arr, int size, int target){
    int ct=0;
    for (int* ptr = arr; ptr < arr + size; ++ptr){
        if(*ptr==target){
            ct++;
        }
    }
    return ct;
}
int main(){
    int n,target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n<1 || n>100){
        printf("Number of elements must be between 1 and 100.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target element: ");
    scanf("%d", &target);
    int ct=ctElement(arr,n,target);
    printf("The element %d appears %d times in the array.\n", target, ct);
    return 0;
}