#include<stdio.h>
int main(){
    int n,m=n-1,c;
    int sum1=0,sum2=0;
    printf("enter the size of  both arrays:");
    scanf("%d %d",&n,&m);
    int a[n],b[n-1];
    printf("Enter the element in first array without leave element:");
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }
    printf("enter the element in second array with leave element:");
    for(int i=0;i<n-1;i++){
       scanf("%d",&b[i]);
    }
    for(int i=0;i<n-1;i++){
        sum2+=b[i];
    }
    c=sum1-sum2;
    printf("leave element=%d",c);
    return 0;
    
}