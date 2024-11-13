#include<stdio.h>
#include<stdbool.h>
bool isSubsequence(char* s, char* t) {
    int i=0,j=0;
    while (t[j]!='\0'){
        if (s[i]==t[j]){
            i++;  
        }
        j++;  
    }
    return s[i]=='\0';
}
int main(){
    if(isSubsequence("abc", "ahbgdc"))
     {
        printf("True\n"); 
    }else{
        printf("False\n");
    }
    if(isSubsequence("axc", "ahbgdc")) 
    {
        printf("True\n");
    }else{
        printf("False\n"); 
    }

    return 0;
}