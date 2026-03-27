#include<stdio.h>
int main(){ 
     int a[50];
    int index=0,found=0;
    int t,r=0;
    int low,high;
    printf("Enter the low and high values: ");
    scanf("%d %d",&low,&high);
    for(int i=low;i<=high;i++){
        index=0;
        found=0;
       t=i;
        while (t!=0)
       {
         r=t%10;
          a[index]=r;
         index++;
         t/=10; 
       }
        for(int p=0;p<index;p++){
            for(int j=p+1;j<index;j++){
                if(a[p]==a[j]){
                    found=1;
                    continue;
                }
                
            }
        }
      if(found==0){
        printf("%d  ",i);                                                      
      }  
    }
 return 0;

}