#include <stdio.h>
#include <string.h>
int main()
{

  char a[100], b[100];
  int freq[26] = {0};
  int i,j;
  int k;
  int sum=0;
  printf("enter the atmost number:");
  scanf("%d",&k);
  printf("Enter the first string:\n");
  for (i = 0; i < 100; i++)
  {
    scanf("%c", &a[i]);
    if (a[i] == '\n')
      break;
  }
  a[i] = '\0';
  
  printf("Enter the second string:\n");
  for (j = 0; j < 100; j++)
  {
    scanf("%c", &b[j]);
    if (b[j] == '\n')
      break;
  }
  b[j] = '\0';
   int p=strlen(a);
   int q=strlen(b);
    if(p!=q){
      printf("string is not Anagram:\n");
    }
    for(i=0;a[i]!='\0';i++){
      freq[a[i]-'a']++;
      
    }
    for(i=0;b[i]!='\0';i++){
      freq[b[i]-'a']--;
      
    }
    for(i=0;i<26;i++){
     sum+=freq[i];
    }
    if(sum<=k){
      printf("string can be made in Anagram:");
    }
    else{
       printf("string can not be made in Anagram:");
    }


  return 0;
}