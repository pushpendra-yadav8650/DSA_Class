#include<stdio.h>
int main(){
    int g[50];
    int n ,i,key,temp=0;
    printf("Enter the number for elements :");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for( i=0 ; i<=n-1; i++){
        scanf("%d",&g[i]);
    }
    printf("Enter the search element :");
    scanf("%d",&key);
    for( i =0 ; i<=n-1 ; i++){
        if(g[i]==key){
            temp = temp+1;
            break;
        }      
    }
    if(temp == 0){
        printf("Sorry! Wrong key press");
    }else{
        printf("This array %d index of %d",key,i);
    }
}