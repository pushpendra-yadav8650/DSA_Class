#include<stdio.h>

int fabio(int);

void main(){
    int n ,ans;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n <=0){
        printf("Invalid statement :");
    }
    ans = fabio(n);
    printf("the result is = %d",ans);
}
int fabio(int n){
    if(n == 1|| n==2){
        return n-1;
    }
    else{
        return fabio(n-1)+fabio(n-2);
    }
}