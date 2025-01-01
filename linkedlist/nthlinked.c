#include<stdio.h>
#include<stdlib.h>

struct node {
    char info;
     struct node *link;

};
main(){
    int n,i;
    struct node *p ,*Head;
    char data;

    p = (struct node* )malloc(sizeof(struct node));

    printf(" \n How many nodes ? please enter");
    scanf("%d",&n);
    Head = p;
    for ( i=2 ; i<=n ; i++){
        printf("Enter data ");
        scanf("%c",&data);

        p->info = data;
        p->link = NULL;

        p-> link =(struct node*)malloc(sizeof(struct node));

        p = p->link;

    }
    p=NULL;
    free(p);

}