#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    // int m=sizeof(a)/sizeof(a[0]);
    printf("Enter element in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]<a[i+1]){
            printf("%d  ",a[i+1]);
        }
    //   elseif(a[i]==a[i+1])
    //   {
    //    printf("  -1  "); 
    //   }
       
        
        else{
            printf(" -1 ");
        }
    }
   printf("  -1"); 
return 0;

}