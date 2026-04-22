#include<stdio.h>
void TOH(int ,char,char,char);
int main(){
    int n=4;
    TOH(n,'A','C','B');
    return 0;
}
void TOH(int n,char f,char t,char a){
    if(n==1){
        printf("\n move disk 1 from %c to %c",f,t);
        return;
    }
    TOH(n-1,f,a,t);
    printf("\n move %d from %c to %c",n,f,t);
    TOH(n-1,a,t,f);
}