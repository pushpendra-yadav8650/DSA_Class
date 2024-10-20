#include<stdio.h>
int main(){
    int n,u,v,i=2;
    printf("Enter the number ");
    scanf("%d %d",&u,&v);
    n=u;
    while( n<=v){
       int x=0;
        while(i<=n-1){
            if(n%i==0){
                x=x+1;
                break;
            }
            i++;
        }
        if(x==0){
            printf("\n %d is prime number \n",n);
        }else{
            printf("\n %d is nt prime number \n",n);
        }
        n++;
    }
}