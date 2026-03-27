#include<stdio.h>
#include<math.h>
int main(){
    int a[] = {2,4,7};
    for (int i = 0; i <= 2; i++)
    {
       printf("%d  ",a[i+1]*-1);
    }
    
   
    return 0;
}