#include<stdio.h>
#include<limits.h>
int main(){
    int m,n;
    int max =INT_MIN;
    printf("Eter the size of row and collom:");
    scanf("%d %d",&m,&n);
   
    int sum=0;
    
    int Amount[m][n];
    int customer[m];
    for(int i=0;i<m;i++){
        printf("Enter the amount:");
        for(int j=0;j<n;j++){
            scanf("%d",&Amount[i][j]);
        }
    } 
     for(int i=0;i<m;i++){
        sum=0;
       for(int j=0;j<n;j++){
       sum+=Amount[i][j];
       customer[i]=sum;
        if(customer[i]>max){
            max=customer[i];  
    }
}
     }
   for(int i=0;i<m;i++){
        if(customer[i]==max){
         printf("index %d value at that index  %d\n",i,customer[i]);
        }
    
       
    }

  return 0; 
}
