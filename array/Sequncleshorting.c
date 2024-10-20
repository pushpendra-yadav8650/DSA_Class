#include<stdio.h>
int main(){
    int g[100];
    int i,x,max,c,n;
    printf("Enter the number of Elements:");
    scanf("%d",&n);
    printf("Enter the all number of Elements :");
    for( i=0 ; i<= n-1; i++){
        scanf("%d",&n);
    }
    for( x=1 ; x<=n-1 ; x++){
        for( i = 1 ; i<= n-x ; i++){
            if(max<=g[i]){
                max=g[i];
            }
           
        }
           c=g[i];
            g[i] = g[n-x];
            g[n-x] = c;
        printf("\n Shorting array\n");
        for( i= 0 ; i<=n-1 ; i++){
            printf("%d,",g[i]);
        }
    }
    return 0;
}