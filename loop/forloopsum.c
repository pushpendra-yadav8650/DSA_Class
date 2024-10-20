#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for( ;n;){
        sum = sum +(n%10);
        n = n/10;
    }
    printf(" sum of number = %d ",sum);
    return 0;
}