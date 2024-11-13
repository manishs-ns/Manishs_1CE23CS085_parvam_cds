#include<stdio.h>
#include<ctype.h>
int isPalindrome(char* s) {
int l=0,r=0;
    while(s[r])r++;
    while(l<--r){
        if(!isalnum(s[l])) l++;
        else if(!isalnum(s[r])) r--;
        else if(tolower(s[l])!=tolower(s[r])) return 0;
        else l++,r--;
    }
    return 1;
}
     int main() {
    printf("%d\n",isPalindrome("A man, a plan, a canal: Panama"));  
    printf("%d\n",isPalindrome("race a car"));  
    printf("%d\n",isPalindrome(" "));  
    return 0;
}