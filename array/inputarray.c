//Input array methd

#include<stdio.h>
int main(){
    int arr[30];
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for( i=0 ; i<=n ; i++){
        scanf("%d",&arr[i]);
    }
    for( i=0 ; i<= n;  i++){
        printf("%d ",arr[i]);
    }
}