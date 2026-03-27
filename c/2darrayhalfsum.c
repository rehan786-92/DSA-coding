#include<stdio.h>
int main(){
int row,collom,n;
int sum1=0,sum2=0;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n][n];
printf("Enter the elemrnt in arrays :");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
      }
   
    } 
    printf("enter the any rows and collom:");
    scanf("%d %d",&row,&collom);
    for(int i=0;i<row;i++){
        sum1+=a[i][0];
    }
    for(int j=1;j<collom;j++){
        sum1+=a[row-1][j];
    }
    for(int j=0;j<collom;j++){
        sum2+=a[0][j];
    }
    for(int i=1;i<row;i++){
        sum2+=a[i][collom-1];
    }
    if(sum1>sum2){
        printf("sum2 path is better:");
        printf("%d\n",sum2);
    }
    else{
        printf("sum1 path is better:");
         printf("%d",sum1);
    }
    return 0;

}