#include<stdio.h>
#define MAXSIZE 100
char stack [MAXSIZE];
int x;
 int top = -1;
 void push(char);
 char pop();;
 int isempty();
 int isfull();
void displaystack();
 int main(){
    push('A');
    push('B');
    push('C');
    push('E');
    push('F');
    push('G');
    push('H');
     displaystack();
    pop();
    pop();
    pop();
 }

 void push( char y){
    if(isfull()){
        printf("stack is overflow");
    }
    else{
        top++;
        stack[top]=y;
    }
 }
 char pop()
 {
     if (isempty())
     {
         printf("Stack is underflow");
     }
     else
     {
         x = stack[top];
         top--;
     }
     return x;
 }
 int isempty(){
    if( top == -1){
        return 1;
    }else{
        return 0;
    }
 }
 int isfull(){
    if(top == MAXSIZE-1){
        return 1;
    }else{
        return 0;
    }
 }
 void displaystack(){
     if (isempty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%c ", stack[i]);
        }
        printf("\n");
    }
 }
 