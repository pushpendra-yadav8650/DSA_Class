#include<stdio.h>
int main(){
    int g,r,z;
    printf("Enter the value of g and r :");
    scanf("%d%d",&g,&r);
    printf("\n before swapping g = %d and r =%d",g,r);
     z=g;
     g=r;
     r=z;
     printf("\n after swapping g= %d and r = %d ",g,r);

     return 0;

}