#include<stdio.h>

void PrintArray(int* A,int n){
    for( int i=0; i<n; i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
void Inerstionsort(int* A, int n){
    int key,j;
    for( int i=1; i<=n; i++){
        key =A[i];
        j=i-1;
        while(j>0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
int main(){
    int n,A[1000];
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Ente the all elements:");
    for( int i=0 ;i<=n-1;i++){
        scanf("%d",&A[i]);
    }
    PrintArray(A,n);
    Inerstionsort(A,n);
    PrintArray(A,n);
    return 0;
}