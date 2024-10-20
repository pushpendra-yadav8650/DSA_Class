#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    do
    {
        sum = sum + (n%10);
        n = n/10;

    } while (n);
    printf("Sum of number = %d",sum);
    
}