#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    if(a>b){
        printf("a=%d is greatest",a);
    }else{
        printf("b=%d is greatest",b);
    }
}