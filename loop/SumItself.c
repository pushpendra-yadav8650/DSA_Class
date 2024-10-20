#include<stdio.h>
int main(){
    int n ,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while( n ){
        sum = sum+(n%10);
        n=n/10;
        
    }
    printf(" the sum of = %d ",sum);


}