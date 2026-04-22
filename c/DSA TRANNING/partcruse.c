#include<stdint.h>
int main(){
    int T;
    printf("Enter last time:");
     scanf("%d",&T);
    int a[T],l[T];
   
    for(int i=0;i<T;i++){
        scanf("%d ",a[i]);
        
    }
    for(int i=0;i<T;i++){
        scanf("%d ",l[i]);
        
    }
    int temp=0;
    int max=0;
    for(int i=0;i<T;i++){
        temp=((temp+a[i])-l[i]);
        if(temp>max){
            max=temp;
        }
    }
    printf("%d",max);
    return 0;
}