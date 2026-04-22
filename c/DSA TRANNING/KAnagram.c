#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];

  printf("enter the first string:");
  fgets(a, 100, stdin);
  printf("enter the second string:");
  fgets(b, 100, stdin);
  int k;
  printf("enter the atmost number:");
  scanf("%d", &k);
  int p = strlen(a);
  int q = strlen(b);
  if (p != q)
  {
    printf("string is not Anagram:");
  }

  int count = 0;
  for (int i = 0; i < p; i++)
  {  for(int j = 0; j < q; j++)
    if (a[i] != b[j])
      count++;
  }
  
  if (k >= count)
  {
    printf("string is k anagram:");
  }
  else
  {
    printf("string is not k anagram:");
  }

  return 0;
}