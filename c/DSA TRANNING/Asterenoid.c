#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
   
    printf("Enter the size of univerce:");
    scanf("%d",&n); 
    int univerce[n];
    printf("Enter the sterrenoid in univerce:");
    for(int i=0;i<n;i++){
        scanf("%d",&univerce[i]);
    }
    for(int i=0;i<n;i++){
      if(univerce[i]>0 && univerce[i+1]>0){

      
      printf(" %d %d",univerce[i],univerce[i+1]);
    
      }
      else if(univerce[i]<(univerce[i+1]*-1)){
        // while(i!=0){
        // univerce[i]=0;
        // i--;
        // }
        for(int j=i;j>=0;j--){
            univerce[j]=0;
        }
        printf("%d",univerce[i+1]);
      }
       else if(univerce[i]>(univerce[i+1]*-1)){
        // while(i!=0){
        // univerce[i]=0;
        // i--;
        // }
        for(int j=0;j<i;j++){
            printf("%d",univerce[j]);
            
        }
        univerce[i+1]=0;
      }
      else if(univerce[i]<0 && (univerce[i+1])>0){
        printf("%d %d",univerce[i],univerce[i+1]);
      }
      else if(univerce[i]<0 && univerce[i+1]<0){
         printf(" %d %d",univerce[i],univerce[i+1]);
      
      }
      
    }
  return 0;
}