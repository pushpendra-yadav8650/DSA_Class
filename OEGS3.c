#include<stdio.h>
int main(){
    int a,b;;
    printf("Enter the first Number :\n");
    scanf("%d",&a);
    printf("Enter the Second Number:\n");
    scanf("%d",&b);
    if( ( a % 2 ==0) &&(a>b)){
        printf("a=%d is odd");
        printf("");
    }
}