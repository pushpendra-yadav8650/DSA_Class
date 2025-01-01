#include<stdio.h>

int gcd(int , int );

void main(){
    int a,b,ans;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    ans = gcd(a,b);
    printf("The result is = %d",ans);
}
int gcd( int a , int b){
    if(b%a == 0){
        return (a);
    }else{
        gcd(b%a,a);
    }
}