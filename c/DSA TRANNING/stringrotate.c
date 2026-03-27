#include<stdio.h>
#include<string.h>
int main(){
   int n;
   printf("enter the size of string : ") ;
   scanf("%d",&n);
   char a[n];
   printf("Enter the string:");
   scanf("%s",a);
//     int m;
//    printf("enter the size of string : ") ;
//    scanf("%d",&m);
//    char b[m];
//    printf("Enter the string:");
//    scanf("%s",b);
   // printf("%s\n",a);
   //int p=strlen(a);
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       printf("%c",a[(i+j)%n] );
        }
printf("\n");
   }
  return 0;
}
 