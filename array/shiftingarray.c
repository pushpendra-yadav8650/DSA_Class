#include<stdio.h>
int main(){
 int g[100];
 int n,i,key;
 printf("Enter the no elements:");
 scanf("%d",&n);
 printf("Enter the shorted array:");
 for( i=0 ; i<= n-1; i++){
    scanf("%d",&g[i]);
 }
 printf("'Enter the key you want to insert in to array\n");
 scanf("%d",&key);
 for(i = n-1 ; i>=0 ; i--){
    if(key < g[i]){
        g[i+1] = g[i];
    }else{
        
        break;
    }
 }
 g[i+1] = key;
 printf("now the array after the insertion as follows \n");
 for( i=0 ; i<=n ; i++){
    printf("%d\t",g[i]);
 }
}