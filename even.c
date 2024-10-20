#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%2==0){
        printf("Number is even =%d\n",n);
        if(n>12){
        printf("N = %d is greater than  12  \n",n);
       }
     }
       
    else{
        printf("The number is odd: %d",n);
    }
}