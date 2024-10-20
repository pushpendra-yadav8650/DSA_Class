// All Neagtive number print by array
#include<stdio.h>
int main(){
    int g[20];
    int i,n;
    printf("Enter the size of array number:");
    scanf("%d",&n);
    printf("Enter the Element of number :");
    for( i = 0 ; i<=n-1 ;i++){
        scanf("%d",&g[i]);
    }
    printf("All Negative element in array ara :");
    for(i=0 ; i<=n-1 ; i++){
        if(g[i]<0){
            printf("%d,",g[i]);
        }
    }

}