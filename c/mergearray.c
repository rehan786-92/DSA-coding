#include<stdio.h>
int main(){
    int m,n,i;
    printf("Enter the size of both arrays:");
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[n+m];
    int med;
    printf("enter integer in first array:");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("enter integer in second array:");
    for(i=0;i<m;i++){
     scanf("%d",&b[i]);
    }
     int p=sizeof(a)/sizeof(a[0]);
    int q=sizeof(b)/sizeof(b[0]);
    for(i=0;i<p;i++){
        c[i]=a[i];
    }
    for(i=0;i<q;i++){
        c[p+i]=b[i];
    }
    printf("merge array of both arrays:");
    for(i=0;i<p+q;i++){
        printf("%d  ",c[i]);
    }
     printf("\n");
    printf("Median of merge array:");
    int r=sizeof(c)/sizeof(c[0]);
    if(r%2==0){
     med=(c[(r/2-1)]+c[(r/2+1-1)])/2;
    
    }
    else
    {
        med=c[(r+1-1)/2];
       
    }
     printf("%d",med);
    return 0;
}