#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int m=n;
    int a[n];
    int invcount=0;
    printf("Enter the element of array:");
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    int i,j=0;
    while (n>0)
    {
        for(i=0;i<m;i++){
            if(i<j && a[i]>a[j]){
             invcount++;
            }
            
        }
            j++;
            n--;
    }
    printf("%d",invcount);
    return 0;
    
}