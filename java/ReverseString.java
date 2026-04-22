import java.util.Scanner;

public class ReverseString {
     public static void main(String[] args){
        Scanner x = new Scanner(System.in);
        System.out.print("Enter the string:");
        String str = x.nextLine();
        String rev = "";
         for(int i=str.length() -1;i>=0;i--) {
            rev = rev+str.charAt(i);
         }
         System.out.println("Reversed string: " +rev);
  }
}
