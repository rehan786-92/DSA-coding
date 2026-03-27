 #include<stdio.h>
 #include<string.h>
 int main(){
    int found=0,i;
    int j=0;
    char a[]={"abccabca"};
    char b[]="ca";
   for( i=0;i< (strlen(a)- strlen(b));i++){
    
     while((j < strlen(b))&&(a[i+j]==b[j])){
        j++;
     }
     if(j==strlen(b)){
     found=1;
     break;
     }
   }
   if(found==1)
   printf("%d",i);
   else
   printf("-1");
   return 0;

 }