#include<stdio.h>
int main(){
    int g[30];
    int n,i,max,min;
    printf("\n Enter the number \n");
    scanf("%d",&n);
    printf("Input all the n element:\n");
    for( i=0;i<=n-1;i++){
        scanf("%d",&g[i]);
    }
    max =g[0];
    min=g[0];
    for(i=1 ; i<=n-1;i++){
        if(max < g[i]){
            max=g[i];
        }
        if(min > g[i]){
            min=g[i];
        }
    }
    printf("the max =%d and min = %d ",max,min);

}
