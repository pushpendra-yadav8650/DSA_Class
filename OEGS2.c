#include<stdio.h>
int main(){
    int y,g;
    printf("Enter y and g \n");
    scanf("%d%d",&y,&g);
    if(y%2==0){
        printf("y = %d is even \n",y);
        if(y>g){
            printf("y=%d is greater than g = %d\n",y,g);
        }else{
            printf("y = %d is less than g = %d\n",y,g);
        }
    }else{
        printf("y=%d is odd \n",y);
        if(y>g){
            printf("y=%d is greater than g = %d\n",y,g);
        }else{
            printf("y=%d is less than g = %d",y,g);
        }
    }
}