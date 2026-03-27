c
   int t;
   char temp;
  //   printf("enter the number of rotation");
  //  scanf("%d",&t);
   t=t%p;
   for(int j=1;j<=t;j++){
     temp=a[0]; 
   for(int i=0;i<p-1;i++){
       
       a[i]=a[i+1];
      
   }
     a[p-1]=temp;
   
   }
  printf("print the rotational string:");

   printf("%s\n",a);
   printf("%s\n",a);
   printf("%s\n",a);
   printf("%s\n",a);

 return 0;

}
 