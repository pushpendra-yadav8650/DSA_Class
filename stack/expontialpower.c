#include<stdio.h>
int exp(int ,int);

main(){
    int a , x, Ans =1;
    printf("Enter the number :");
    scanf("%d%d",&a,&x);
    Ans = exp(a,x);
    printf("The resule is = %d",Ans);


}
int exp(int a , int x){
    if(x == 0){
        return 1;
    }else{
        return a*exp(a ,x-1);
    }
}
