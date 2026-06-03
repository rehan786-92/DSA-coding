#include<stdio.h>
 int main(){
 char str1[]="rehan";
 char str2[]="anreh";
 
 int freq[26]={0};
  for(int i=0;i<5;i++){
    freq[str1[i]-'a']++;
    freq[str2[i]-'a']--;
  }
  for(int i=0;i<26;i++){
    if(freq[i]==0){
        printf("string is Anagram:");
        break;
    }
    else{
       printf("string is not Anagram:"); 
    }
    
  }
  return 0;
 }