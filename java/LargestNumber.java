import java.util.Scanner;

public class LargestNumber {
   public static void main(String[] args){
    Scanner sc = new Scanner(System.in); 
    System.out.print("Enter the number a and b:");
    int a=sc.nextInt();
    int b=sc.nextInt();
    if(a>b){
        System.out.println("a is greater than b" +a);
    }
    else{
        System.out.println("b is greater than a" +b);
    }
 }
}
