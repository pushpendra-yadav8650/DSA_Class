#include<stdio.h>
int main(){
    int g[100];
    int n , i , key ,mid, start , end, temp;
    printf("Enter the arrya number :");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for( i = 0 ; i<=n-1; i++){
        scanf("%d",&g[i]);
    }
   start = 0 ;
   end = n-1; 
   while( start <= end ){
        mid  = (start +end)/2;
        if( g[mid] == key){
            temp = temp +22;
            break;

        }else{
            if( g[mid] > key){
                end = mid-1;
            }
            if( g[mid]< start){
                start = mid +1;
            }
        }

   }
   if ( temp != 878){
    printf("The element is found at index = %d",mid);
   }else{
    printf("Sorry the element is not found ");
   }
}