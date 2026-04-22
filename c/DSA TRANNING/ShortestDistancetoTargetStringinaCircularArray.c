#include<stdio.h>
#include<string.h>
int closestTarget(char** words, int wordsSize, char* target, int startIndex) ;
int main(){
char*  words[]={"hello","i","am","leetcode","hello"};
    int x=closestTarget(words,5,"am",0);
    printf("%d",x);
    return 0;
}
    int closestTarget(char** words, int wordsSize, char* target, int startIndex) {
    int fcount=-1,bcount=-1;
    int m=__INT_MAX__,n=__INT_MAX__;
    int i=startIndex;
    do{
            fcount++;
        if(strcmp(words[i],target)==0){
            m=fcount;
            break;
        }
        i=(i + 1) % wordsSize;
    }while(i!=startIndex);
    i=startIndex;
    do{
        bcount++;
        if(strcmp(words[i],target)==0){
            n=bcount;
            break;
        }
        i=(i -1+wordsSize) % wordsSize;
    }while(i!=startIndex);
    if(n==__INT_MAX__) return -1;
    return m<n?m:n;
}
