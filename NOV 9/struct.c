#include<stdio.h>
struct student{
    int rollno;
    float percentage;
};
int main(){
    struct student s;
    {
        s.rollno=95;
        s.percentage=98.5;
        printf("%d \n",s.rollno);
        printf("%f",s.percentage);

    };
}