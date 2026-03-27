#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the row and collomn:");
    scanf("%d %d",&n,&m);
    int index =0;
    int min=0,max=0;
    int a[n][m];
    int b[]=0;
    int t=1;
    printf("Enter the value in matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t*=a[i][j];
        }

    }
}