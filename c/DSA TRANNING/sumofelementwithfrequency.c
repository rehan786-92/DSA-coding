#include<stdio.h>
int main(){
    int n;
   printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    int freq[n];
        int k;
        int t;
         for(int i=0;i<n;i++)
            freq[i]=0;
    // printf("enter the vlue of k:");
    // scanf("%d",&k);    

    for(int i=0;i<n;i++){
      
        scanf("%d",&a[i]);
    
    
        
        freq[a[i]]++;
        printf("%d ",freq[i]);
    }

return 0;
}