#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n); 
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int largest=-1001,second_largest=-1001;
        for(int i=0;i<n;i++) 
        {
            if(arr[i]>largest) 
                {
                second_largest=largest;
                largest=arr[i];
            }else if(arr[i]>second_largest&&arr[i]!=largest){
                second_largest=arr[i];
            }
        }printf("%d\n",largest+second_largest);
    }
}