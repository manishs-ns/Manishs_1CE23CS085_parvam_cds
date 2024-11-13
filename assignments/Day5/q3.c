#include<stdio.h>
int main(){
    int n,a,num=0;
    scanf("%d%d",&n,&a);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]==a){
            num=1;
            break;
        }
    }
    if(num)printf("YES");
    else printf("NO");
}