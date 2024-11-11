#include<stdio.h>
int isPresent(int n,int arr[n],int target){
    int left=0,right=n-1;
    while(left<=0){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }return -1;
}
   
int main(){
    int n,i;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("enter the target element:");
    scanf("%d",&target);
    printf("%d",isPresent(n,arr,target));
}
