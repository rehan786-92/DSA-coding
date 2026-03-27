#include<stdio.h>
int main(){
    long long m,n;
    long long mod=12345;
    printf("enter the rows and collom:");
    scanf("%lld %lld",&m,&n);
    long long grid[m][n];
    long prefix=1;
    long sufix=1;
    long long sum[m][n];
    printf("enter the values in matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%lld",&grid[i][j]);
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           sum[i][j]=prefix;
           prefix=(prefix*grid[i][j])%mod;
        
        }
    }
     for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
           sum[i][j]=(sum[i][j]*sufix);
           sufix=(sufix*grid[i][j])%mod;
        
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%lld  ",sum[i][j]);
        }
    }
    return 0;
}