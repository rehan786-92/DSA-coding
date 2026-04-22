#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of binary array:");
    scanf("%d",&n);
    int bits[n];
    printf("Enter the binarry digits in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&bits[i]);
    }
    int i=0;
    while(i<n){
     if(bits[i]==1)
     i+=2;
    else
     i+=1;
    }
    if(i==n-1)
    printf("single binary");
    else
    printf("double binary");

    return 0;
}