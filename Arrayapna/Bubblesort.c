#include<stdio.h>

int main(){
    int g[1000];
    int n, i,j,temp=0;
    printf("Enter the arry number :");
    scanf("%d",&n);
    printf("Enter the element of array :");
    for ( i = 0; i <= n-1; i++)
    {
        scanf("%d",&g[i]);
    }
    for( i = 0 ; i<= n-1; i++){
        for( j=0 ; j<n-i-1 ; j++){
            if(g[j] > g[j+1]){
                temp = g[j];
                g[j]=g[j+1];
                g[j+1]= temp;
            }
        }
    }
    printf("Sorted array as follows :");
    for ( i =0 ; i<=n-1 ;i++){
        printf("%d\t",g[i]);
    }

    
}