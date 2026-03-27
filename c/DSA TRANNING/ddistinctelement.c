#include<stdio.h>
int main(){
    int low,high;
    printf("Enter the low and high values:");
    scanf("%d %d",&low,&high);
    int r=0,t;
    int found=0,index=0;
    int freq [10] ;
    for(int i=low;i<=high;i++){
        t=i;
        index=0;
        found=0;
        int freq[10] = {0};
        while (t>0)
        {
            r=t%10;
            freq[r]++;
            index++;
            t/=10;
        }
         for(int p=0;p<index;p++){
             if(freq[p]==2){
         found=1;
         continue;
         break;
        }
       
       
    }
    if(found==0){
        printf("%d ",i);
    } 
}
    
    
   return 0;
}