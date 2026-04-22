#include<stdio.h>
#include<limits.h>
int main(){
    int i;
    int n = INT_MAX;
    int a[]={2,2,3,12,12,15};
    int freq[]={0,0,0,0,0,0};
    int t;
    for(i=0;i<6;i++){
    t=a[i];
    freq[t]++;
    printf("%d ",freq[i]);
}
return 0;
}