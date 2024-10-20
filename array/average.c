#include<stdio.h>
int main(){
    int m[15];
     int i,sum=0,avg;
     printf("Enter the marks of all students:\n");
     for(i =0 ; i<=15 ; i++){
        scanf("%d",&m[i]);
     }
     for(i =0 ; i<=15 ; i++){
        sum = sum+m[i];
     }
     avg =sum/15;
     printf("\n avg of student marks =%d \n",avg);
     printf("\n sum = %d\n ",sum);

     return 0;
        }