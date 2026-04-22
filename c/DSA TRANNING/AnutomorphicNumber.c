#include <stdio.h>
#include <string.h>
int main()
{ 
    int n;
    printf("Enter the any number:");
    scanf("%d",&n);
    int m=n*n;
    int r1,r2;
    // int rem=0;
    int count=0;
    int len=0;
    while(n!=0){
      r1=n%10;
      r2=m%10;
      len++;
    //   rem=10*rem+r2;
      if(r1!=r2){
        break;
      }
      else{
        count++;
      }
      n/=10;
      m/=10;
    }
    if(len==count){
        printf("The number is Automorphism:");
    }
    else{
       printf("The number is not Automorphism:"); 
    }
    return 0;
}