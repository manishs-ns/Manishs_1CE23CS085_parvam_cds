#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    while (x--){
        int n,minfresh,totalCost = 0;
        scanf("%d %d",&n,&minfresh); 
        int fresh,cost;
        for (int i=0;i<n;i++){
            scanf("%d %d", &fresh,&cost);
            if (fresh>=minfresh){
                totalCost+=cost;
            }
        }
        printf("%d\n",totalCost);
    }
}