#include<stdio.h>
int main(){
	int i,fact=1,n;
	printf("Enter the number :");
	scanf("%d",&n);
	 i=n;
	 while( i >= 1){
	 	fact = fact*i;
	 	i=i-1;
	 }
	 printf("fact  = %d",fact);
}
