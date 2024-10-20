#include<stdio.h>
int main(){
    int g[10];
    int i, n ,sum=0,mul=1;
    printf("Enter the actual no of elements:");
    scanf("%d",&n);
    for( i =0 ; i<n ; i++){
        scanf("%d",&g[i]);
    }
    for( i =0 ; i<n ; i++){
        sum = sum+g[i];
        mul = mul*g[i]; 
    }
     printf("sum of elements = %d\n",sum);
     printf("mul of elements = %d",mul);
   
}
