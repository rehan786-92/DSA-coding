import java.util.Scanner;

public class Greatestnumberinarray {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Array ka size enter kare:");
        int n=sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Element enter kare:");
         for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
         }
         int largest=arr[0];
         for(int i=1;i<arr.length;i++){
            largest=arr[i];
         }  
         System.out.println("Largest element ="+ largest); 
    }
}
 