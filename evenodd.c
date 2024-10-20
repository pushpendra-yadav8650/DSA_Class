#include<stdio.h>
int main(){
 int n;

 printf("Enter the value of n:");
 scanf("%d",&n);
 if(n%2==0 && n>12){
    printf("y=%d is even number and greater than 12 ",n);
 }
    return 0;
}