#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    printf("enter size of aaray a and b\n");
    scanf("%d %d",&n,&m);
    char a[n+1];
    char b[m+1];
    int i,j=0;
    printf("enter the character in first string:");
    while (a[i!='\0'])
    {
        printf("%c",a[i]);
    }i++;
    
     printf("enter the character in second string:");
     while (b[j]!='\0')
     {
        printf("%c",b[j]);
     }j++;
     
    int p,q;
    p=strlen(a);
    q=strlen(b);
   
    if(p>=q){
        for(i=0;i<p && j<q ;i++){
            if(a[i]==b[j]){
                j++;
            }

            }
            if(j==q){
                printf("true");
            }
            else{
                printf("false");
            } 
        
    }
    else{
        printf("false");
    }
    
    return 0;

}