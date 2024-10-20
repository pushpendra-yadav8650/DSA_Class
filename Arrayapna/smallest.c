#include<stdio.h>
int main(){
    int size = 7;
    int marks[]={ 23,43,54,2223,12,334,9};
    // int msize = sizeof(marks)/sizeof(int);
//     printf("%d",msize);
      int min,max;
      for( int i = 0 ; i<size; i++){
        if( marks[i] < min){
            min = marks[i];
        }
        if(max  < marks[i] ){
            max =marks[i];
        }
      }
      printf(" smallest is = %d\n",min);
      printf(" largest  is = %d",max);


 }