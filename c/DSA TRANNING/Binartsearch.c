#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int binarysearch(int arr[],int n,int tar){
    int str=0;
    int end = n - 1;
    while(str<=end){
         int mid = str + (end-str)/2;
        if(tar==arr[mid]){
            return mid;
        }
        else if(tar>arr[mid]){
            str=mid+1;
        }
        else{
            end=mid-1;
        }
    }
   return -1; 
}
int main(){
    int n,tar;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     qsort(arr,n,sizeof(int),compare);
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter the target element:");
    scanf("%d",&tar);
    int result = binarysearch(arr,n,tar);
    if(result!=-1){
        printf("target is found  at index of given array:\n%d",result);
    }
    else{
       printf("target is not found in given array:\n%d",result); 
    }
    return 0;
}