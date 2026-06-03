#include <stdio.h>
#include <string.h>
int man()
{

  char a[26], b[26];
  int freq[26] = {0};
  int i;
  printf("Enter the first string:");
  for (i = 0; i < 26; i++)
  {
    scanf("%c", &a[i]);
    if (a[i] == '\n')
      break;
  }
  a[i] = '\0';
  printf("Enter the second string:");
  for (i = 0; i < 26; i++)
  {
    scanf("%c", &b[i]);
    if (b[i] == '\n')
      break;
  }
  b[i] = '\0';
   int p=strlen(a);
   int q=strlen(b);
    if()



  return 0;
}