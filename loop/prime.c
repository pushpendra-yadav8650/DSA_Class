#include<stdio.h>
int main(){
    int n,i,x=7;
    printf("Enter the number :");
    scanf("%d",&n);
    for( i =2 ;i<=n-i ; i++){
        if(n%i==0){
            x=x+10;
            break;
        }
    }
    if(x ==7){
        printf(" \n n=%d is a prime number ",n);
    }else{
        printf("\n n=%d is not a prime number ",n);
    }
    return 0;
}