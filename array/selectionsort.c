#include<stdio.h>
int main(){
    int g[100];
    int n, i, j, min,temp=0;
    printf("Enter the number of array:");
    scanf("%d",&n);
    printf("Enter the elements of array :");
    for( i = 0 ; i<=n-1; i++){
        scanf("%d",&g[i]);

    }
    for( i = 0; i<=n-1 ; i++){
        min =i;
        for( j= i+1 ; j<n ; j++){
            if(g[j] < g[min]){
                min = j;
            }
        }
        temp = g[i];
        g[i]= g[min];
        g[min] = temp;
    }
    printf("Sorting array:");
    for( i = 0 ; i<=n-1 ;i++){
        printf("%d\t",g[i]);
    }

}