#include<stdio.h>
int main(){
    int y ,g;
    printf("Enter the value of Y:");
    scanf("%d",&y);
    printf("Enter the value of G:");
    scanf("%d",&g);
    if(y%2==0){
        printf("y=%d is even\n",y);
       if(y>g){
        printf("y = %d is greater g = %d",y,g);
       }
  
    }
    else{
        printf("y=%d is odd\n",y);
        if(y>g){
            printf("y=%d is greater than g=%d",y,g);
        }
    }
}