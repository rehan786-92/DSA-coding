#include <stdio.h>
#include<string.h>
int main(){
    int t;
    printf("enter number of test case:");
    scanf("%d",&t);
    while(t!=0){
       int chutki=0;
       int bhim=0;
       int n;
        printf("enter size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter the element in aaray:");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            if(i%2==0 && arr[i]%2==0){
                chutki+=arr[i];
            }
            else if(i%2!=0 && arr[i]%2!=0){
                bhim+=arr[i];
            }
        }
        if(chutki>bhim){
            printf("chutki\n");
        }
        else if(chutki==bhim){
            printf("draw\n");
        }
        else{
            printf("bhim\n");
        }
        
      t--;
    }
    return 0;
}
