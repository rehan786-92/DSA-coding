#include<stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *first = NULL, *last = NULL;

void creat(){
    struct node *p, *q;
    int x;
    while (1)
    {
        p=(struct node *)malloc(sizeof(struct node));
        printf("enter the info");
        scanf("%d",&p-> info);
        if(first == NULL){
            first = NULL;
            last = p;
        }else{
            last-> next = p;
            last = p;
        }
        printf("1. press 1 for new node\n");
        printf("2. press other then exit\n");
        scanf("%d",&x);
        if(x!=1){
            break;
        }
        last-> next = NULL;
    }
    
}

void traverse(){
    struct node *p;
    p = first;
    while (p != NULL)
    {
        printf("%d ->",p -> info);
        p=p -> next;

    }
    printf("NULL");
    
}

// void insert_first(){
//     struct node *p;

// }

int main(){
    creat();
    traverse();
    return 0;
}