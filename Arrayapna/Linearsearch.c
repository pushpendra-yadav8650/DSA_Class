#include<stdio.h>
int main(){
    int target = 45;
    int size =7;
    int found = 0;
    int arr[] = { 23,34,12,45,23,12,34};
    int i;
    for( i=0 ; i<size ; i++){
        if(arr[i] == target){
          
            found +=1;
            break;
        }
    }
    //   printf("%d",i);
    if( found != 0){
         printf("this array %d index of = %d",target,i);
    }else{
        printf("this array index %d not found = %d",target,i);
    }
 
}