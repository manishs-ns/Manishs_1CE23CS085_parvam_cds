#include<stdio.h>
int gcd(int a, int b) {
    while(b!= 0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int T;
    printf("enter the size: ");
    scanf("%d", &T); 
    while(T--){
        int N;
        scanf("%d", &N); 
        int arr[N];
        for (int i=0;i<N;i++){
            scanf("%d",&arr[i]);
        }
        int max1=0,max2=0;
        for (int i=0;i<N;i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }else if(arr[i]>max2 && arr[i]!=max1){
                max2=arr[i];
            }
        }
        int max_sum=max1+max2;
        printf("%d\n", gcd(max_sum,max2));
    }
    return 0;
}