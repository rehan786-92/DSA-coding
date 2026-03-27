#include<stdio.h>
int main(){
    int n,k;
    int found=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    int a[n];
      printf("Enter value of k:");
    scanf("%d",&k);
    int m=k;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==m){
            
           
             m=m+k;
             i=-1;
             found=1;
        } 
    }
    if(found==0)
    printf("%d\n",k);
    else
    printf("%d",m);
    return 0;
}