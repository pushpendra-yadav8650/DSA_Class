#include<stdio.h>
int main(){
    int g[1000];
    int n,i,pass,temp,step;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Now enter all element:");
    for( i=0 ;i<=n-1;i++){
        scanf("%d",&g[i]);
    }
    for( pass = 1 ; pass<n-1 ; pass++){
        step = 1;
        for(i=0; step<=n-pass;i++ ){
            if(g[i]<=g[i+1]){
                temp = g[i];
                g[i]=g[i+1];
                g[i+1]=temp;
            }
            step++;
        }
    }
    printf("The sorted array is as follows :\n");
    for( i=0 ; i<=n-1 ; i++){
        printf("%d\t",g[i]);
    }
}