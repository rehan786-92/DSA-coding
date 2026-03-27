#include<stdio.h>
int main(){
    int low,high;
    int t,p;
    int flag=0;
    // int a[10]={0};
    printf("Enter the range low and high values:");
    scanf("%d %d",&low,&high);
    for(int i=low;i<=high;i++){
        p=i;
        
        int k;
        while (p!=0)
        {
        
            t=p%10;
            if(t!=0 && i%t==0){
            p/=10;
            flag=1;
        }
        else
        {
        flag=0;
       break;
        }
    }
    if(flag==1)
     printf("%d ",i);  
    }
    return 0;
}