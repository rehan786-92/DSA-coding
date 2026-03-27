#include<stdio.h>
int main(){
    int gcd=0;
    int a,b;
    int temp;
    printf("enter the n1 n2:");
    scanf("%d %d",&a,&b);
   while(b!=0){
     temp=b;
     b=a%b;
     a=temp;
   }
   printf("%d",a);
   return 0;
}