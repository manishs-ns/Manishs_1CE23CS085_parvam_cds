#include<stdio.h>
int isSufficient(int n,int arr[],int enough){
    if(n==0){
        return -1;
    }
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
        if(total>=enough){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int r;
    printf("enter value of r:");
    scanf("%d",&r);
    int unit;
    printf("enter value of unit:");
    scanf("%d",&unit);
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        }
        int enough=r*unit;
        printf("%d",isSufficient(n,arr,enough));

}
    

