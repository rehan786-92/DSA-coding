#include<stdio.h>
#include<stdlib.h>
struct dleast

{
    int info;
    struct dleast *pre, *next;
};
void create();
void traverseforward();
void traversebackward();
 struct dleast *first=NULL, *last=NULL;

 void create(){
    struct dleast *p;
    int x;
    while (1)
    {
        p=(struct dleast *)malloc(sizeof(struct dleast));
    printf("Enter the info:");
    scanf("%d",&p->info);
    if(first==NULL){
        first=p;
        last=p;
        p->pre=NULL;
    }
    else{
        last->next=p;
        p->pre=last;
        last=p;
    }
    printf("Enter the new node for dleast: ");
    scanf("%d",&x);
  if(x!=1){
    break;
  }
}
  last->next=NULL;
    
 }
 void traverseforward(){
    struct dleast *p;
    p=first;
    printf("\nshow farwarddleast:");
    while (p!=NULL)
    {
        printf("%d  ",p->info);
        p=p->next;
    }
    
 }
 void traversebackward(){
    struct dleast *q;
     q=last;
      printf("\nshow backwarddleast:");
     while (q!=NULL)
     {
        printf("%d  ",q->info);
        q=q->pre;
     }
    }  
     void insertatfirst(){
        struct dleast *p;
        p=(struct dleast *)malloc(sizeof(struct dleast));
        printf("Enter the info:");
        scanf("%d",&p->info);
        first=p;
        if(first==NULL){
            first=p;
            last=p;
            
        }
        else{
            p->next=first;
            first->pre=p;
            
        }
        p->pre=NULL;
     }
     void insertatlast(){
        struct dleast *p;
        p=(struct dleast *)malloc(sizeof(struct dleast));
        printf("Enter the info:");
        scanf("%d",&p->info);
        last=p;
        if(first==NULL){
            first=p;
            last=p;
            p->pre=NULL;
        }
        else{
            last->next=p;
            p->pre=last;
            p->pre=NULL;
        }
        p->next=NULL;
     }
     void insertin_between(){
        struct dleast *p,*q;
        int x;
        scanf("%d",&x);
         p=(struct dleast *)malloc(sizeof(struct dleast));
        printf("Enter the info:");
        scanf("%d",&p->info);

     }
     
 
 int main(){
    create();
    traverseforward();
    traversebackward();
    return 0;
 }