#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a ,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a=%d is largest \n ",a);
        }
        else{
            printf("c=%d is largest \n",c);
        }
    }
    else{
        if(b>c){
            printf("b=%d is largest \n",b);
        }
        else{
            printf(" c=%d is largest ",c);
        }
    }
}