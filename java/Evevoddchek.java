import java.util.Scanner;

public class Evevoddchek {
    public static void main(String[] args){
        Scanner var1=new Scanner(System.in); 
        System.out.println("Enter the any enteger:");
        int n = var1.nextInt();
        if(n%2==0){
            System.out.println("The given number is Even:");
        }
        else{
            System.out.println("The given number is Odd:");
        }
    }  
 }
