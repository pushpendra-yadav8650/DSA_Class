#include<stdio.h>
int sumArray(int arr[], int n);
int main(){
    int n,i,sum,arr[100];
    printf("Enter the number of array:");
    scanf("%d",&n);
    printf("Enter the array of all elements");
    for(i = 0; i < n-1 ; i++){
        scanf("%d",&arr[i]);
    }
    sum = sumArray(arr,n);
    printf("Sum of all array elemts = %d",sum);
    return 0;
}
int sumArray(int arr[] , int n){
    if(n == 0){
        return 0;
    }else{
        return(arr[n-1]+sumArray(arr,n-1));
    }
}
